///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBAUTHRoutes.h"
#import "DBBase.h"
#import "DBFILESRoutes.h"
#import "DBSHARINGRoutes.h"
#import "DBTransportClientProtocol.h"
#import "DBUSERSRoutes.h"

@implementation DBBase

- (instancetype)initWithTransportClient:(id<DBTransportClient> _Nonnull)client {
  self = [super init];
  if (self) {
    _transportClient = client;
    _authRoutes = [[DBAUTHRoutes alloc] init:client];
    _filesRoutes = [[DBFILESRoutes alloc] init:client];
    _sharingRoutes = [[DBSHARINGRoutes alloc] init:client];
    _usersRoutes = [[DBUSERSRoutes alloc] init:client];
  }
  return self;
}
@end
