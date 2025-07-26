class Solution {
private:
    // Extract hostname from URL (e.g., "http://news.yahoo.com/news" -> "news.yahoo.com")
    string getHostname(const string& url) {
        size_t start = url.find("//") + 2;
        size_t end = url.find("/", start);
        return end == string::npos ? url.substr(start) : url.substr(start, end - start);
    }

public:
    vector<string> crawl(string starturl, Htmlparser htmlParser){
        string hostname = getHostname(starturl);
        unordered_set<string> visited;
        queue<string> q;
        mutex mtx;
        vector<thread> workers;

        q.push(starturl);
        visited.insert(starturl);

        auto worker = [&](){
            while(true){
                string currurl;
                {
                    lock_guard<mutex> lock(mtx);
                    if(q.empty()) return;
                    currurl = q.front();
                    q.pop(); 
                }

                for(auto& nexturl: htmlParser.geturls(currurl)){
                    if(getHostname(nexturl)==hostname){
                        lock_guard<mutex> lock(mtx);
                        if(visited.insert(nexturl).second){
                            q.push(nexturl);
                        }
                    }
                }
            }
        };
        const int threads = 4;
        for(int i=0; i<threads; i++){
            workers.emplace_back(worker);
        }

        for(auto& t: workers){
            t.join();
        }

        return vector<string>(visited.begin(), visited.end());
        
    }

}