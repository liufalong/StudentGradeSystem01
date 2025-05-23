void GradeSystem::showClassAverage() {
    if (students.empty()) {
        cout << "No student data!" << endl;
        return;
    }
    double total = 0;
    for (auto& s : students) {
        total += s.getTotal();
    }
    cout << "Class average: " << total / students.size() << endl;
}
void GradeSystem::showRanking() {
    sort(students.begin(), students.end(),
        [](const Student& a, const Student& b) {
            return a.getTotal() > b.getTotal();
        });
    cout << "Ranking List:" << endl;
    for (int i = 0; i < students.size(); ++i) {
        cout << i + 1 << ". " << students[i].name
            << " (Total: " << students[i].getTotal() << ")" << endl;
    }
}