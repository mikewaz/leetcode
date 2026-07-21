//
// Created by marks on 21.07.2026.
// https://leetcode.com/problems/flood-fill
//

#include <vector>
#include <queue>

namespace easy {
    class S733 {
    public:
        std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>> &image, int sr, int sc, int color) {
            int oldColor = image[sr][sc];

            std::queue<std::pair<int, int>> q;
            std::vector<std::vector<bool>> visited( image.size(), std::vector<bool>(image[0].size(), false));

            q.emplace(sr, sc);
            visited[sr][sc] = true;

            while (!q.empty()) {
                auto [r, c] = q.front();
                q.pop();
                image[r][c] = color;

                if (r > 0 && !visited[r - 1][c] && image[r - 1][c] == oldColor && !visited[r - 1][c]) {
                    q.emplace(r - 1, c);
                    visited[r - 1][c] = true;
                }

                if (r < image.size() - 1 && !visited[r + 1][c] && image[r + 1][c] == oldColor && !visited[r + 1][c]) {
                    q.emplace(r + 1, c);
                    visited[r + 1][c] = true;
                }

                if (c > 0 && !visited[r][c - 1] && image[r][c - 1] == oldColor && !visited[r][c - 1]) {
                    q.emplace(r, c - 1);
                    visited[r][c - 1] = true;
                }

                if (c < image[0].size() - 1 && !visited[r][c + 1] && image[r][c + 1] == oldColor && !visited[r][c + 1]) {
                    q.emplace(r, c + 1);
                    visited[r][c + 1] = true;
                }
            }

            return image;
        }
    };
}