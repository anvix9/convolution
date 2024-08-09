#include "toy_matrices.hpp"

  //toy matrices for edge cases
std::array<std::array<int, 14>, 9> matrix_1 = {{
        {1, 4, 4, 2, 1, 0, 0, 1, 0, 0, 3, 3, 3, 4}, 
        {0, 2, 0, 2, 0, 3, 4, 4, 2, 1, 1, 3, 0, 4},
        {1, 1, 0, 0, 3, 4, 2, 4, 4, 2, 3, 0, 0, 4},
        {4, 0, 1, 2, 0, 2, 0, 3, 3, 3, 0, 4, 1, 0},
        {3, 0, 0, 3, 3, 3, 2, 0, 2, 1, 1, 0, 4, 2},
        {2, 4, 3, 1, 1, 0, 2, 1, 3, 4, 4, 0, 2, 3},
        {2, 4, 3, 3, 2, 1, 4, 0, 3, 4, 1, 2, 0, 0},
        {2, 1, 0, 1, 1, 2, 2, 3, 0, 0, 1, 2, 4, 2},
        {3, 3, 1, 1, 1, 1, 4, 4, 2, 3, 2, 2, 2, 3}
}};

std::array<std::array<int, 5>, 5>  matrix_2 = {{
  {2, 4, 6, 1, 6},
  {1, 2, 3, 4, 5},
  {0, 9, 5, 3, 1},
  {4, 5, 6, 1, 0},
  {7, 2, 3, 5, 6}
}};

int matrix_3[3][3]= {
  {2,4,1},
  {5,1,0},
  {7,2,3}
};

std::array<std::array<int, 3>, 3> kernel = {{
  {1, 1, 2},
  {2, 1, 1},
  {1, 1, 1}
}};
