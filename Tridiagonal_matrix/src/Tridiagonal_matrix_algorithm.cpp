#include "Tridiagonal_matrix.cpp"

template <typename T>
std::vector<T> tridiagonal_matrix_algorithm (const TridiagonalMatrix<T>& tm, const std::vector<T>& d){
    unsigned N = tm.get_size();
    
    std::vector<T> p, q;
    p.reserve(N - 1);
    q.reserve(N - 1);

    p.push_back(- tm[0].b / tm[0].a);
    q.push_back(d[0] / tm[0].a);

    for(unsigned i = 1; i < N - 1; i++){
        p.push_back(- tm[i].c / (tm[i].a * p[i - 1] + tm[i].b));
        q.push_back((d[i] - tm[i].a * q[i - 1]) / (tm[i].a * p[i - 1] + tm[i].b));
    }

    std::vector<T> x;
    x.resize(N);

    x[N - 1] = (d[N - 1] - tm[N - 1].b * q[N - 2]) / (tm[N - 1].b * p[N - 2] + tm[N - 1].c);
    for(unsigned i = 0; i < N - 1; i++){
        x[N - 2 - i] = p[N - 2 - i] * x[N - 1 - i] + q[N - 2 - i];
    }

    return x;
}