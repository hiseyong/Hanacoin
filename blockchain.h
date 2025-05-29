//
// Created by 안세용 on 2025. 5. 29..
//

#ifndef HANACOIN_BLOCKCHAIN_H
#define HANACOIN_BLOCKCHAIN_H

#include <vector>
#include "block.h"

class Blockchain {
public:
    Blockchain();
    void addBlock(const std::string& data);
    const std::vector<Block>& getChain() const;

private:
    std::vector<Block> chain;
    int difficulty;

    Block mineBlock(Block block);
};

#endif //HANACOIN_BLOCKCHAIN_H
