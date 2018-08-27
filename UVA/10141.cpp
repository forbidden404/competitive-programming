#include <iostream>
#include <string>
#include <vector>
#include <tuple>

int main() {
    int a, b, c = 1;
    std::string ignore;
    while (scanf("%d %d%*c", &a, &b), (a || b)) {
        if (c != 1) { printf("\n"); }
        while (a--) {
            std::getline(std::cin, ignore);
        }

        std::vector<std::tuple<std::string, double, int>> proposals;
        proposals.reserve(b);
        int maxMet = 0;
        while (b--) {
            std::string name;
            double price;
            int requirementsMet;
            std::getline(std::cin, name);
            scanf("%lf %d%*c", &price, &requirementsMet);
            if (requirementsMet > maxMet) {
                maxMet = requirementsMet;
                proposals.clear();
                proposals.push_back(std::make_tuple(name, price, requirementsMet));
            } else if (requirementsMet == maxMet) {
                proposals.push_back(std::make_tuple(name, price, requirementsMet));
            }

            while (requirementsMet--) { 
                std::getline(std::cin, ignore) ;
            }
        }

        double lowestPrice = 0.0f;
        auto answer = proposals.front();
        for (auto v : proposals) {
            if (lowestPrice == 0.0f) {
                lowestPrice = std::get<1>(v);
                answer = v;
            } else if (lowestPrice > std::get<1>(v)) {
                lowestPrice = std::get<1>(v);
                answer = v;
            }
        }

        printf("RFP #%d\n%s\n", c++, std::get<0>(answer).c_str());
    }
}