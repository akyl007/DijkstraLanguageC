#ifndef SEMESTRAL_GRAPH_HPP
#define SEMESTRAL_GRAPH_HPP

#include <iostream>
#include <map>
#include <vector>
#include <limits>
#include <fstream>

using namespace std;

class graph {
private:
    size_t m_nodes{};
    size_t m_edges{};
    std::map<int,std::map<int,int>> data;

public:

    graph() = default;

    /**
     * Konstruktor, který načítá data z daného souboru
     *
     * @param cesta k souboru s daty grafu
     */
    explicit graph(std::string path);

    ~graph() = default;

    /**
     * Načíst datový soubor z cesty @param ve formátu nnc:
     *
     * formát nnc v dokumentaci
     *
     * @param cesta k souboru
     */
    void nncLoading(std::string path);

    /**
     * Vlákno bezpečného tisku řešení daných dat
     *
     * Instance skříňky @param mtx
     * @param vypočítáná nejbližší vzdálenost
     */
    void printSolution(std::mutex &mtx, int from, int *distance);

    /**
     * kontrolní tisk
     */
    void printMatrix(std::mutex &mtx);

    /**
     * zvýšit matici +1
     */
    void increase_matrix();

    /**
     * Dijkstra najde nejbližší cestu v hodnoceném grafu
     *
     * @param vzdálenost pro uložení výsledků
     */
    void dijkstra(int origin, int *distance);

    /**
     * Getter pro soukromou proměnnou obsahuje počet uzlů
     *
     * @return počet uzlů
     */
    size_t get_nodes() const;

    /**
     * Getter pro soukromou proměnnou obsahují počet hran
     *
     * @return počet hran
     */
    size_t get_edges() const;
};

#endif //SEMESTRAL_GRAPH_HPP
