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
vector<Ambulance> ambulances;

// ---------------- HELPERS ----------------

string toUpperCase(string s) {
    for (char &c : s) c = toupper(c);
    return s;
}

int getDistance(string a, string b) {
    return graph[areaIndex[a]][areaIndex[b]];
}

// ---------------- INIT ----------------

void initSystem() {
    areaIndex["MIRPUR"] = 0;
    areaIndex["DHANMONDI"] = 1;
    areaIndex["GULSHAN"] = 2;
    areaIndex["UTTARA"] = 3;

    vector<pair<string,string>> hospitals = {
        {"DMC", "MIRPUR"},
        {"SQUARE", "DHANMONDI"},
        {"APOLLO", "GULSHAN"},
        {"LABAID", "UTTARA"}
    };

    for (int i = 0; i < hospitals.size(); i++) {
        for (int j = 0; j < 5; j++) {
            ambulances.push_back({
                ambulanceID++,
                hospitals[i].first,
                hospitals[i].second,
                hospitals[i].second,
                true
            });
        }
    }
}

// ---------------- FEATURES ----------------

void addEmergency() {
    Emergency e;
    e.id = emergencyID++;

    cout << "Enter Area (Mirpur/Dhanmondi/Gulshan/Uttara): ";
    cin >> e.area;
    e.area = toUpperCase(e.area);

    if (areaIndex.find(e.area) == areaIndex.end()) {
        cout << "Invalid area!\n";
        return;
    }

    cout << "Enter Severity (1-5): ";
    cin >> e.severity;

    pq.push(e);
    totalAdded++;

    cout << "Emergency Added! ID: " << e.id << endl;
}
