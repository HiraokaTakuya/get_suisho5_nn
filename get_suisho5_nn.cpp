#include "水匠5/embedded_nnue.cpp"
#include <fstream>

int main() {
    std::ofstream ofs("suisho5_nn/nn.bin", std::ios::binary);
    ofs.write(gEmbeddedNNUEData, gEmbeddedNNUESize);
}

