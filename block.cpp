//
// Created by 안세용 on 2025. 5. 29..
//
#include "block.h"
#include "sha256.h"
#include <sstream>

Block::Block(int idx, const std::string& data, const std::string& prevHash)
        : index(idx), timestamp(std::time(nullptr)), data(data), prevHash(prevHash), nonce(0) {
    hash = calculateHash();
}

std::string Block::calculateHash() const {
    std::stringstream ss;
    ss << index << timestamp << data << prevHash << nonce;
    return SHA256::hash(ss.str());
}