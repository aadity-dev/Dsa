

class LRUCache {
    int cap;
    struct Node {
        int key, val;
        Node *prev, *next;
        Node(int _key, int _val) : key(_key), val(_val), prev(nullptr), next(nullptr){}
    };
    
    unordered_map<int, Node*> mp;
    Node *head, *tail;
// rm. a node form ddl
    void remove(Node* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
    void insert(Node* node){
        node->next = head->next;
        node->next->prev = node;
        head->next = node;
        node->prev = head;
    }
public:
    LRUCache(int capacity){
        cap = capacity;
        head = new Node(0,0);
        tail = new Node(0,0);
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if(mp.find(key) == mp.end()) return -1;

        Node* node = mp[key];
        remove(node);
        insert(node);
        return node->val;

    }

    void put(int key, int value) 
    {
        if(mp.find(key) != mp.end()){
            remove(mp[key]);
            mp.erase(key);
        }
        // if(mp.find(key) != mp.end()){
        // Node* node = mp[key];
        // node->val = value;
        // remove(node);
        // insert(node);
        // return;
        // }
    if(mp.size() == cap){
        Node* lru = tail->prev;
        mp.erase(lru->key);
        remove(lru);
        delete lru;
    }
    Node* newNode = new Node(key, value);
    insert(newNode);
    mp[key] = newNode;
    }
};
