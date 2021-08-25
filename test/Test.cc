#include "gtest/gtest.h"
#include "src/SortAlgos.h"
#include <random>
#include <vector>
#include <algorithm>

TEST(SortAlgos, InsertSort) {
    std::random_device r;
    std::default_random_engine el(r());
    std::uniform_int_distribution<int> uniform_dist(INT32_MIN, INT32_MAX);
    constexpr size_t len = 10000;
    std::vector<int> v1, v2;
    for (size_t i = 0; i < len; i++) {
        v1.push_back(uniform_dist(el));
    }
    v2 = v1;
    std::sort(v2.begin(), v2.end());
    InsertSort(v1.data(), v1.size());
    for (int i = 0; i < len; i++) {
        EXPECT_EQ(v1, v2);
    }
}

TEST(SortAlgos, MergeSort) {
    std::random_device r;
    std::default_random_engine el(r());
    std::uniform_int_distribution<int> uniform_dist(INT32_MIN, INT32_MAX);
    constexpr size_t len = 10000;
    std::vector<int> v1, v2;
    for (size_t i = 0; i < len; i++) {
        v1.push_back(uniform_dist(el));
    }
    v2 = v1;
    std::sort(v2.begin(), v2.end());
    MergeSort(v1.data(), v1.size());
    for (int i = 0; i < len; i++) {
        EXPECT_EQ(v1, v2);
    }
}