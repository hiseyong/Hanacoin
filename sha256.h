//
// Created by 안세용 on 2025. 5. 29..
//

#ifndef HANACOIN_SHA256_H
#define HANACOIN_SHA256_H

#include <string>
#include <vector>

class SHA256 {
public:
    SHA256();
    void update(const unsigned char* data, size_t length);
    void update(const std::string& data);
    std::string digest();
    static std::string hash(const std::string& data);

private:
    void transform(const unsigned char* chunk);
    void pad();
    void revert(unsigned char* hash);

    unsigned char  m_data[64];
    uint32_t       m_datalen;
    uint64_t       m_bitlen;
    uint32_t       m_state[8];
};

#endif //HANACOIN_SHA256_H