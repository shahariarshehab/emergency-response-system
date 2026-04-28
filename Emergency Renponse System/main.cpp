#include <bits/stdc++.h>
using namespace std;

// ---------------- STRUCTS ----------------

struct Emergency {
    int id;
    string area;
    int severity;
};

struct Compare {
    bool operator()(const Emergency &a, const Emergency &b) const {
        return a.severity < b.severity;
    }
};

struct Ambulance {
    int id;
    string hospital;
    string area;
    string baseArea;
    bool available;
};

// ---------------- GLOBALS ----------------

int emergencyID = 1;
int ambulanceID = 1;

priority_queue<Emergency, vector<Emergency>, Compare> pq;
vector<Emergency> completed;
stack<Ambulance> undoStack;

map<string, int> areaIndex;

int totalAdded = 0;
int totalHandled = 0;

int graph[4][4] = {
    {0, 3, 6, 7},
    {3, 0, 4, 5},
    {6, 4, 0, 2},
    {7, 5, 2, 0}
};
