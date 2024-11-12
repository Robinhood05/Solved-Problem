#include<iostream>
#include<bits/stdc++.h>
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define pb push_back
#define test(test) while (test--)
#define FOR(i, start, end) for (int i = start; i < end; ++i)
#define For(n) for (int i = 0; i < n; ++i)

using namespace std;



int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0)
            break;
        else if(n==1){
             cout << "Discarded cards:"<<endl;
             cout<<"Remaining card: "<<1<<endl;
        }
        else {

        queue<int> card_on_deck;
        vector<int> discarded_card;

        for (int i = 1; i <= n; ++i) {
            card_on_deck.push(i);
        }

        while (card_on_deck.size() >= 2) {
            discarded_card.push_back(card_on_deck.front()); 
            card_on_deck.pop();
            card_on_deck.push(card_on_deck.front());
            card_on_deck.pop();
        }

        cout << "Discarded cards: ";
        for (int i = 0; i < discarded_card.size(); ++i) {
            cout << discarded_card[i];
            if (i < discarded_card.size() - 1)
                cout << ", ";
        }
        cout << endl;

        cout << "Remaining card: " << card_on_deck.front() << endl;
    }
}

    return 0;
}
