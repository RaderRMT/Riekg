#include "ItemStrategy.hpp"

class RestoreHealthStrategy : public ItemStrategy {

public:
    void use() override;

private:
    static const int HEALTH_RESTORE = 50;
};
