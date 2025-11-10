#include <fstream>

int main()
{
    std::ofstream out("cardname.txt");
    if (!out) return 1;
    out << "cardName = m_videoCardDescription;";
    return 0;
}