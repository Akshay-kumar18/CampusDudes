#include "campus_logic.h"

namespace campusdudes {

int ScoreCard::evaluateProject(const ProjectMetric& metric) {
    return metric.innovation + metric.technicalComplexity + metric.uiUx + metric.realWorldImpact;
}

std::string ScoreCard::explainVerdict(int totalScore) {
    if (totalScore >= 320) {
        return "Excellent: this project is likely to impress judges across all evaluation dimensions.";
    }
    if (totalScore >= 240) {
        return "Strong: valuable concept with good execution and a clear user story.";
    }
    if (totalScore >= 160) {
        return "Promising: a solid concept that needs stronger polish and clearer impact.";
    }
    return "Needs rework: focus on clarity, real-world value, and UX before submission.";
}

}  // namespace campusdudes
