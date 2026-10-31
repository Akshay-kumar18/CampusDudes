#pragma once

#include <string>

namespace campusdudes {

struct ProjectMetric {
    int innovation = 0;
    int technicalComplexity = 0;
    int uiUx = 0;
    int realWorldImpact = 0;
};

class ScoreCard {
public:
    static int evaluateProject(const ProjectMetric& metric);
    static std::string explainVerdict(int totalScore);
};

}  // namespace campusdudes
