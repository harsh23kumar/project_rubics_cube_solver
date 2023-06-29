#include <bits/stdc++.h>
#include "Generic_rubics_cube_solver.h"
#include "RubiksCube3d.cpp"
#include "RubicksCube1d.cpp"

using namespace std;

int main() {
//   RubiksCube3dArray object3DArray;
//   object3DArray.print();
//   object3DArray.b();
//
//vector<RubiksCube::MOVE> arr=object3DArray.randomShuffleCube(4);
//
//  for(auto v:arr){
//      cout<<object3DArray.getMove(v)<<" ";
//  }

RubiksCube1dArray object1DArray;
object1DArray.print();
object1DArray.lPrime();
    object1DArray.print();

    return 0;
}
