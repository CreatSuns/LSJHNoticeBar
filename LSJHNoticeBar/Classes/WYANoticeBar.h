//
//  WYANoticeBar.h
//  WYAKit
//
//  Created by 李世航 on 2018/11/20.
//

#import <UIKit/UIKit.h>
#import <LSJHCategory/LLCategory.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, WYANoticeBarScrollDirection) {
    WYANoticeBarScrollDirectionLeft,   // 向左移动
    WYANoticeBarScrollDirectionTop,    // 向上移动
    WYANoticeBarScrollDirectionBottom, // 向下移动
};

@interface WYANoticeBar : UIView

/// 是否显示左侧按钮（显示的是图片或者文字）
@property (nonatomic, assign) BOOL showNoticeButton UI_APPEARANCE_SELECTOR;
/// 通知按钮是否可以点击
@property (nonatomic, assign) BOOL noticeButtonCanTouch UI_APPEARANCE_SELECTOR;
/// 是否显示右侧按钮（显示的是图片或者文字）
@property (nonatomic, assign) BOOL showRightButton UI_APPEARANCE_SELECTOR;
/// 右侧按钮是否可以点击
@property (nonatomic, assign) BOOL rightButtonCanTouch UI_APPEARANCE_SELECTOR;
/// 显示的文字(WYANoticeBarScrollDirectionLeft模式下设置使用),最后设置
@property (nonatomic, copy) NSString * showText;
/// 显示的文字颜色
@property (nonatomic, strong) UIColor * showTextColor UI_APPEARANCE_SELECTOR;
/// 显示的文字大小
@property (nonatomic, assign) CGFloat showTextFont UI_APPEARANCE_SELECTOR;
/// 左侧要显示的图片
@property (nonatomic, strong) UIImage * noticeButtonImage UI_APPEARANCE_SELECTOR;
/// 右侧要显示的图片
@property (nonatomic, strong) UIImage * rightButtonImage UI_APPEARANCE_SELECTOR;
/// 背景颜色
@property (nonatomic, strong) UIColor * noticeBackgroundColor UI_APPEARANCE_SELECTOR;
/// 类型为WYANoticeBarScrollDirectionTop、WYANoticeBarScrollDirectionBottom显示的文字需要使用数组传入，最后设置
@property (nonatomic, strong) NSArray * textArray;
/// 水平方向速度 （min~0.1）default is 0.01
@property (nonatomic, assign) CGFloat horizontalSpeed UI_APPEARANCE_SELECTOR;
/// 垂直方向速度 （1~max）default is 2
@property (nonatomic, assign) CGFloat verticalSpeed UI_APPEARANCE_SELECTOR;
/// 左侧按钮点击事件
@property (nonatomic, copy) void (^leftButtonHandle)(void);
/// 右侧按钮点击事件
@property (nonatomic, copy) void (^rightButtonHandle)(void);

/**
 初始化

 @param frame frame
 @param scrollDirection 移动方向
 @return self
 */
- (instancetype)initWithFrame:(CGRect)frame
              scrollDirection:(WYANoticeBarScrollDirection)scrollDirection;

/**
 开始动画
 */
- (void)wya_start;

/**
 结束动画
 */
- (void)wya_stop;
@end

NS_ASSUME_NONNULL_END
