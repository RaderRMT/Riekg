#include "ItemStrategy.hpp"

class GiveGoldStrategy : public ItemStrategy {

public:
    void use() override;

private:
    static const int GOLD_COUNT = 5;
};
