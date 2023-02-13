#include "gtest/gtest.h"
#include "Tridiagonal_matrix_algorithm.cpp"

TEST(Tridiag_matrix_alg, 3_3){
    TridiagonalMatrix<double> t = {1, 2, 0, 3, 4, 5, 0, 6, 7};
    std::vector<double> d = {1, 2, 3};
    std::vector<double> answer = {0, 0.5, 0};

    std::vector<double> x = tridiagonal_matrix_algorithm(t, d);

    for (unsigned i = 0; i < x.size(); i ++) {
        ASSERT_NEAR(x[i], answer[i], 1e-9);
    }
    
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}