//
//  TabView+NIStyleable.h
//  TKAppBase_V1
//
//  Created by liubao on 15-9-10.
//  Copyright (c) 2015年 liubao. All rights reserved.
//
#import "TKComponent.h"

@class NICSSRuleset;
@class NIDOM;

@interface TabView (NIStyleable)

/**
 * Applies the given rule set to this navigation bar. Use applyNavigationBarStyleWithRuleSet:inDOM: instead
 *
 * This method is exposed primarily for subclasses to use when implementing the
 * applyStyleWithRuleSet: method from NIStyleable.
 */
- (void)applyTabViewStyleWithRuleSet:(NICSSRuleset *)ruleSet DEPRECATED_ATTRIBUTE;

/**
 * Applies the given rule set to this navigation bar.
 *
 * This method is exposed primarily for subclasses to use when implementing the
 * applyStyleWithRuleSet: method from NIStyleable.
 */
- (void)applyTabViewStyleWithRuleSet:(NICSSRuleset *)ruleSet inDOM: (NIDOM*) dom;

@end