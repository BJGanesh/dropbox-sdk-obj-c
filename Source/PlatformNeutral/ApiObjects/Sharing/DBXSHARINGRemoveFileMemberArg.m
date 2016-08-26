///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGMemberSelector.h"
#import "DBXSHARINGRemoveFileMemberArg.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGRemoveFileMemberArg 

- (instancetype)initWithFile:(NSString *)file member:(DBXSHARINGMemberSelector *)member {
    [DBXStoneValidators stringValidator:[NSNumber numberWithInt:1] maxLength:nil pattern:@"((/|id:).*|nspath:[^:]*:[^:]*)"](file);

    self = [super init];
    if (self != nil) {
        _file = file;
        _member = member;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGRemoveFileMemberArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGRemoveFileMemberArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGRemoveFileMemberArgSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGRemoveFileMemberArgSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGRemoveFileMemberArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"file"] = valueObj.file;
    jsonDict[@"member"] = [DBXSHARINGMemberSelectorSerializer serialize:valueObj.member];

    return jsonDict;
}

+ (DBXSHARINGRemoveFileMemberArg *)deserialize:(NSDictionary *)valueDict {
    NSString *file = valueDict[@"file"];
    DBXSHARINGMemberSelector *member = [DBXSHARINGMemberSelectorSerializer deserialize:valueDict[@"member"]];

    return [[DBXSHARINGRemoveFileMemberArg alloc] initWithFile:file member:member];
}

@end