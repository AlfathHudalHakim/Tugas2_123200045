#include <iostream>
#include <string>

using namespace std;

// Enum untuk merepresentasikan state
enum State {
    OFF_HOOK,
    ON_HOOK,
    CONNECTING,
    CONNECTED,
    ON_HOLD
};

// Fungsi untuk mengembalikan string yang merepresentasikan state
string stateToString(State state) {
    switch (state) {
        case OFF_HOOK:
            return "OFF_HOOK";
        case ON_HOOK:
            return "ON_HOOK";
        case CONNECTING:
            return "CONNECTING";
        case CONNECTED:
            return "CONNECTED";
        case ON_HOLD:
            return "ON_HOLD";
        default:
            return "INVALID_STATE";
    }
}

int main() {
    // Memulai dari state OFF_HOOK
    State currentState = OFF_HOOK;

    // Menampilkan state awal
    cout << "Current State: " << stateToString(currentState) << endl;

    // Mengubah state dari OFF_HOOK ke CONNECTING
    currentState = CONNECTING;

    // Menampilkan state baru
    cout << "Current State: " << stateToString(currentState) << endl;

    // Mengubah state dari CONNECTING ke CONNECTED
    currentState = CONNECTED;

    // Menampilkan state baru
    cout << "Current State: " << stateToString(currentState) << endl;

    // Mengubah state dari CONNECTED ke ON_HOLD
    currentState = ON_HOLD;

    // Menampilkan state baru
    cout << "Current State: " << stateToString(currentState) << endl;

    // Mengubah state dari ON_HOLD ke ON_HOOK
    currentState = ON_HOOK;

    // Menampilkan state baru
    cout << "Current State: " << stateToString(currentState) << endl;

    return 0;
}
