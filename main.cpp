#include <iostream>
#include "blockchain.h"

int main() {
    Blockchain bc;

    bc.addBlock("User A pays 10 BTC to User B");
    bc.addBlock("User B pays 5 BTC to User C");

    const auto& chain = bc.getChain();

    for (const auto& block : chain) {
        std::cout << "Index: " << block.index << "\n";
        std::cout << "Timestamp: " << block.timestamp << "\n";
        std::cout << "Data: " << block.data << "\n";
        std::cout << "Prev Hash: " << block.prevHash << "\n";
        std::cout << "Hash: " << block.hash << "\n";
        std::cout << "Nonce: " << block.nonce << "\n";
        std::cout << "---------------------------\n";
    }

    return 0;
}