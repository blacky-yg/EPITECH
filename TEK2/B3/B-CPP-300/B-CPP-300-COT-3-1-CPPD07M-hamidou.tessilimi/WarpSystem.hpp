/*
** EPITECH PROJECT, 2021
** day07m
** File description:
** WarpSystem
*/

#ifndef WARPSYSTEM_HPP
#define WARPSYSTEM_HPP

namespace WarpSystem {
    class QuantumReactor {
        public:
            QuantumReactor();
            ~QuantumReactor();

            bool isStable(void);
            void setStability(bool stability);
        private:
            bool _stability;
    };

    class Core {
        public:
            Core(QuantumReactor *coreReactor);
            ~Core();

            QuantumReactor *checkReactor();
        private:
            QuantumReactor *_coreReactor;
    };
}

#endif /* !WARPSYSTEM_HPP */