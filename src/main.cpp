#include <Geode/Geode.hpp>
#include <Geode/modify/GauntletSelectLayer.hpp>
using namespace geode::prelude;
class $modify(GauntletSelectLayer) {
    void setupGauntlets() {
        GauntletSelectLayer::setupGauntlets();

        if (m_scrollLayer->m_pages->count() == 1) static_cast<CCNode*>(m_scrollLayer->m_pages->objectAtIndex(0))->getChildByID("gauntlet-menu")->setPositionX(-285.f);
    }
};
