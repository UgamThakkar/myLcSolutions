class TextEditor {
public:
    deque<char> left, right;
    TextEditor() {
        
    }
    
    void addText(string text) {
        for(char c: text) left.push_back(c);
    }
    
    int deleteText(int k) {
        int deleted = 0;
        while(!left.empty() && k--){
            left.pop_back();
            deleted++;
        }
        return deleted;
    }
    
    string cursorLeft(int k) {
        while(k-- && !left.empty()){
            right.push_front(left.back());
            left.pop_back();
        }
        return getLast10();
    }
    
    string cursorRight(int k) {
        while(k-- && !right.empty()){
            left.push_back(right.front());
            right.pop_front();
        }
        return getLast10();
    }
    private:
        string getLast10(){
            string result;
            int start = max(0, (int)left.size()-10);
            for(int i=start; i<left.size(); i++){
                result +=left[i];
            }
            return result;
        }
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */