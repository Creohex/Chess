//
//  ViewController.h
//  Chess
//
//  Created by Admin on 15/11/14.
//  Copyright (c) 2014 Pew-pew industries inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Figure.h"
#import "myXYPoint.h"

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *myDisplay;

@property (strong, nonatomic) IBOutlet UIImageView *ImageView1;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView2;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView3;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView4;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView5;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView6;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView7;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView8;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView9;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView10;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView11;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView12;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView13;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView14;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView15;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView16;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView17;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView18;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView19;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView20;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView21;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView22;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView23;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView24;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView25;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView26;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView27;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView28;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView29;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView30;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView31;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView32;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView33;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView34;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView35;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView36;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView37;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView38;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView39;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView40;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView41;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView42;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView43;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView44;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView45;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView46;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView47;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView48;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView49;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView50;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView51;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView52;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView53;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView54;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView55;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView56;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView57;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView58;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView59;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView60;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView61;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView62;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView63;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView64;
@property (strong, nonatomic) Figure *pawn1, *pawn2, *pawn3, *pawn4, *pawn5, *pawn6, *pawn7, *pawn8, *pawnBlack1, *pawnBlack2, *pawnBlack3, *pawnBlack4, *pawnBlack5, *pawnBlack6, *pawnBlack7, *pawnBlack8, *rook1, *rook2, *rookBlack1, *rookBlack2, *knight1, *knight2, *knightBlack1, *knightBlack2, *bishop1, *bishop2, *bishopBlack1, *bishopBlack2, *queen, *queenBlack, *king, *kingBlack;
@property NSMutableArray *cells, *figures, *gestureArray, *figurePositionsWhite, *figurePositionsBlack, *possibleFigureMoves;
@property (nonatomic,retain)IBOutlet UIButton *mainButton;
@property NSMutableString *playerTurn;
@property int turnProgress,imageTapTrigger,initializationTrigger;
@property long tagOfCellToMoveFrom,tagOfCellToMoveTo;
@property myXYPoint *coordsOfFigureToMove;
@property Figure *figureToMove;

- (IBAction)click;
- (IBAction)DebugClick:(UIButton *)sender;

- (void)imageTap:(id)sender;
- (void)returnFiguresToBasicPositions;
- (void)clearCells;
- (void)updateBoard;
- (NSMutableArray*)createImageViewArray;
- (NSMutableArray*)createGestureRecognizerArray;
- (void)initFigures;
- (NSString*)getCellStateAtTag:(long)currentTag;
- (Figure*)getFigureAtTag:(int)currentTag;
- (Figure*)getFigureAtCoords:(int)x andY:(int)y;
- (NSMutableArray*)getPossibleTurnCoordsForFigure:(Figure*)currentFigure color:(NSString*)currentFigureColor;
- (void)getPossibleTurnCoordsForPawn:(NSString*)currentFigureColor array:(NSMutableArray*)currentArray x:(int)currentX y:(int)currentY;
- (BOOL)getPossibleTurnCoordsAssistFunc:(NSString*)currentFigureColor array:(NSMutableArray*)currentArray xyObj:(myXYPoint*)tempXYCoords figureType:(NSString*)type;
- (void)getPossibleTurnCoordsForRook:(NSString*)currentFigureColor array:(NSMutableArray*)currentArray x:(int)currentX y:(int)currentY;
- (void)getPossibleTurnCoordsAssistFunc2:(NSString*)currentFigureColor array:(NSMutableArray*)currentArray xyObj:(myXYPoint*)tempXYCoords figureType:(NSString*)type;
- (void)getPossibleTurnCoordsForKnight:(NSString*)currentFigureColor array:(NSMutableArray*)currentArray x:(int)currentX y:(int)currentY;
- (void)getPossibleTurnCoordsForBishop:(NSString*)currentFigureColor array:(NSMutableArray*)currentArray x:(int)currentX y:(int)currentY;
- (void)getPossibleTurnCoordsForQueen:(NSString*)currentFigureColor array:(NSMutableArray*)currentArray x:(int)currentX y:(int)currentY;
- (void)getPossibleTurnCoordsForKing:(NSString*)currentFigureColor array:(NSMutableArray*)currentArray x:(int)currentX y:(int)currentY;
- (void)addToPossibleTurnCoordsArray:(NSMutableArray*)array XYobj:(myXYPoint*)objectToStore;
- (int)convertCoordsToTag:(int)x y:(int)y;
- (void)updateFigurePositions;
- (BOOL)arrayDoesContainCoord:(myXYPoint*)coord inArray:(NSMutableArray*)positionsArray;
- (void)showPossibleFigureMovesFromArray:(NSArray*)arrayWithPossibleMoves;


@end

