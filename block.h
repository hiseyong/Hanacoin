//
// Created by 안세용 on 2025. 5. 29..
//

#ifndef HANACOIN_BLOCK_H
#define HANACOIN_BLOCK_H


#include <string>
#include <ctime>

struct Block {
    int index;
    std::time_t timestamp;
    std::string data;
    std::string prevHash;
    std::string hash;
    uint64_t nonce;

    Block(int idx, const std::string& data, const std::string& prevHash);

    std::string calculateHash() const;
};

#endif //HANACOIN_BLOCK_H
