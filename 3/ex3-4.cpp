#include "../PPPheaders.h"
vector<double> dists;
double city_dist, city_mean, max_dist, min_dist; // distance between two cities and the mean of the two distances, greatest distance and smallest distance



int main() {
    cout << "please enter distances between two cities\n";
    while (cin >> city_dist) {
        dists.push_back(city_dist);
        cout << "please enter distances between two cities\n";   
    }
    for (int i = 0; i < dists.size(); i++) {
        max_dist = max(max_dist, dists[i]);
        min_dist = min(min_dist, dists[i]);
        city_mean += dists[i];
    }
    city_mean = city_mean/dists.size();
  cout << max_dist << " " << min_dist << " " << city_mean << endl;
    return 0;   
}
