//
// Created by 안세용 on 2025. 5. 29..
//
#include "blockchain.h"
#include <iostream>

Blockchain::Blockchain() : difficulty(4) { // e.g., hash must start with "0000"
    chain.emplace_back(0, "Genesis Block", "0");
}

void Blockchain::addBlock(const std::string& data) {
    const Block& prev = chain.back();
    Block newBlock(chain.size(), data, prev.hash);
    Block mined = mineBlock(newBlock);
    chain.push_back(mined);
}

Block Blockchain::mineBlock(Block block) {
    std::string target(difficulty, '0');

    while (block.hash.substr(0, difficulty) != target) {
        block.nonce++;
        block.hash = block.calculateHash();
    }

    std::cout << "Block mined: " << block.hash << " (nonce: " << block.nonce << ")\n";
    return block;
}

const std::vector<Block>& Blockchain::getChain() const {
    return chain;
}