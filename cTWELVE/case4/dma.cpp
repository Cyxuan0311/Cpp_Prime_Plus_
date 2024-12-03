#include "dma.h"
#include <cstring>

// baseDMA Implementation
baseDMA::baseDMA(const char *l, int r) {
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

baseDMA::baseDMA(const baseDMA &rs) {
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

baseDMA::~baseDMA() {
    delete[] label;
}

baseDMA &baseDMA::operator=(const baseDMA &rs) {
    if (this == &rs)
        return *this; // Handle self-assignment
    delete[] label; // Free existing memory
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const baseDMA &rs) {
    os << "Label: " << rs.label << "\nRating: " << rs.rating;
    return os;
}

// lacksDMA Implementation
// lacksDMA 构造函数实现（无默认参数）
lacksDMA::lacksDMA(const char *c, const char *l, int r) : baseDMA(l, r) {
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

std::ostream &operator<<(std::ostream &os, const lacksDMA &rs) {
    os << (const baseDMA &)rs; // Call base class operator<<
    os << "\nColor: " << rs.color;
    return os;
}

// hasDMA Implementation
hasDMA::hasDMA(const char *s, const char *l, int r) : baseDMA(l, r) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char *s, const baseDMA &rs) : baseDMA(rs) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &hs) : baseDMA(hs) {
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA() {
    delete[] style;
}

hasDMA &hasDMA::operator=(const hasDMA &rs) {
    if (this == &rs)
        return *this; // Handle self-assignment
    baseDMA::operator=(rs); // Call base class assignment operator
    delete[] style; // Free existing memory
    style = new char[std::strlen(rs.style) + 1];
    std::strcpy(style, rs.style);
    return *this;
}

std::ostream &operator<<(std::ostream &os, const hasDMA &rs) {
    os << (const baseDMA &)rs; // Call base class operator<<
    os << "\nStyle: " << rs.style;
    return os;
}
