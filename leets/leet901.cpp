class StockSpanner {
    stack<pair<int,int>> st; // {day, price}
    int currDay = -1;

public:
    StockSpanner() {}

    int next(int price) {
        currDay++;

        while (!st.empty() && price >= st.top().second) {
            st.pop();
        }

        int span;
        if (st.empty()) {
            span = currDay + 1;
        } else {
            span = currDay - st.top().first;
        }

        st.push({currDay, price}); 
        return span;
    }
};