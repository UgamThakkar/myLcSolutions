class Solution{
    public:
        vector<string> crawl(string startUrl, HtmlParser htmlParser){
            string hostName = getHostName(starUrl);

            unordered_set<string> visited;
            queue<string> q;

            q.push(startUrl);
            visited.insert(startUrl);

            while(!q.empty()){
                string currUrl = q.front();
                q.pop();

                vector<string> nextUrls = htmlParser.getUrls(currUrl);

                for(auto& nextUrl = nextUrls){
                    if(getHostName(nextUrl)==hostName && visited.find(nextUrl) == visited.end()){
                        q.push(nextUrl);
                        visited.insert(nextUrl);
                    }
                }
            }
        }
        return vector<string>(visited.begin(), visited.end());


private:
    string getHostName(const string& url){
        int start = url.find("//") + 2;
        int end = url.find("/", start);

        return end == string::npos ? url.substr(start) : url.substr(start, end-start);
    }
}