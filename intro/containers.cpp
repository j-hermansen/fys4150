

int main() {

    // Creating a vector
    int n = m = 10;
    std::vector<double> my_vector(n, 0.0);

    // Append to vector
    my_vector.push_back(1.0);

    // Creating a matrix
    std::vector<std::vector<double>> A(n); // Reserve N elements of type std::vector<double>.
    for (int i = 0; i < n; i++){
        A[i].reserve(m); //Reserve memory for M elements of type double at row i
    }
}