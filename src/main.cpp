#include <Geode/Geode.hpp>
#include <Geode/modify/GauntletSelectLayer.hpp>
using namespace geode::prelude;
class $modify(GauntletSelectLayer) {
    bool init(int gt) {
        return GauntletSelectLayer::init(gt);
    }

    void setupGauntlets() {
        GauntletSelectLayer::setupGauntlets();

        auto list = this->getChildByIDRecursive("gauntlets-list");
        if (!list) return;

        auto pages = typeinfo_cast<CCArray*>(list->getChildByID("gauntlet-pages")->getChildren());
        if (pages->count() == 0) return;

        auto page = typeinfo_cast<CCMenu*>(typeinfo_cast<CCLayer*>(pages->objectAtIndex(0))->getChildren()->objectAtIndex(0));
        if (pages->count() == 1) {
            page->setPosition({-285.f, page->getPosition().y});
        }
    }
};
