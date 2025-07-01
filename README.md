# C++ Qt API Client For Discord HTTP API (Preview) 

Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.

## Metadata

- API version: 10

## Requirements

Building the API client library requires:

1. CMake 3.2+
2. Qt
3. C++ Compiler

## Getting Started

example.h:
```c++

#include <iostream>
#include "../client/OAIDefaultApi.h"

using namespace test_namespace;

class Example : public QObject {
    Q_OBJECT
    QString create();
    QString create();
    OAIAdd_group_dm_user_request create();
public Q_SLOTS:
   void exampleFunction1();
};

```

example.cpp:
```c++

#include "../client/OAIDefaultApi.h"
#include "example.h"
#include <QTimer>
#include <QEventLoop>

QString Example::create(){
    QString obj;
QString Example::create(){
    QString obj;
OAIAdd_group_dm_user_request Example::create(){
    OAIAdd_group_dm_user_request obj;
 return obj;
}

void Example::exampleFunction1(){
     OAIDefaultApi apiInstance;
     
      // Configure API key authorization: BotToken
      apiInstance.setApiKey("YOUR API KEY NAME","YOUR API KEY");

      QEventLoop loop;
      connect(&apiInstance, &OAIDefaultApi::addGroupDmUserSignal, [&]() {
          loop.quit();
      });
      connect(&apiInstance, &OAIDefaultApi::addGroupDmUserSignalE, [&](QNetworkReply::NetworkError, QString error_str) {
          qDebug() << "Error happened while issuing request : " << error_str;
          loop.quit();
      });

      QString channel_id = create(); // QString | 

      QEventLoop loop;
      connect(&apiInstance, &OAIDefaultApi::addGroupDmUserSignal, [&]() {
          loop.quit();
      });
      connect(&apiInstance, &OAIDefaultApi::addGroupDmUserSignalE, [&](QNetworkReply::NetworkError, QString error_str) {
          qDebug() << "Error happened while issuing request : " << error_str;
          loop.quit();
      });

      QString user_id = create(); // QString | 

      QEventLoop loop;
      connect(&apiInstance, &OAIDefaultApi::addGroupDmUserSignal, [&]() {
          loop.quit();
      });
      connect(&apiInstance, &OAIDefaultApi::addGroupDmUserSignalE, [&](QNetworkReply::NetworkError, QString error_str) {
          qDebug() << "Error happened while issuing request : " << error_str;
          loop.quit();
      });

      OAIAdd_group_dm_user_request oai_add_group_dm_user_request = create(); // OAIAdd_group_dm_user_request | 
      apiInstance.addGroupDmUser(channel_iduser_idoai_add_group_dm_user_request);
      QTimer::singleShot(5000, &loop, &QEventLoop::quit);
      loop.exec();
  }

```

## Documentation for Servers

Parameterized Servers are supported. Define a server in the API for each endpoint with arbitrary numbers of variables:

```yaml
servers:
- url: http://{server}:{port}/{basePath}
  description: Description of the Server
  variables:
    server:
        enum:
          - 'petstore'
          - 'qa-petstore'
          - 'dev-petstore'
        default: 'petstore'
    port:
      enum:
        - '3000'
        - '1000'
      default: '3000'
    basePath:
      default: v1
```
To change the default variable, use this function in each Api:
```c++
int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
```
The parameter "serverIndex" will choose a server from the server list for each endpoint. There is always at least one server with index 0. The Parameter "operation" should be the desired endpoint operationid.
Variable is the name of the variable you wish to change and the value is the new default Value.
The function will return -1 when the variable does not exists, -2 if value is not defined in the variable enum and -3 if the operation is not found.

If your endpoint has multiple server objects in the servers array, you can set the server that will be used with this function:
```c++
void setServerIndex(const QString &operation, int serverIndex);
```
Parameter "operation" should be your operationid. "serverIndex" is the index you want to set as your default server. The function will check if there is a server with your index.
Here is an example of multiple servers in the servers array. The first server will have index 0 and the second will have index 1.
```yaml
servers:
- url: http://{server}:8080/
  description: Description of the Server
  variables:
    server:
        enum:
          - 'petstore'
          - 'qa-petstore'
          - 'dev-petstore'
        default: 'petstore'
- url: https://localhost:8080/v1
```

## Documentation for Authorization

Authentication schemes defined for the API:
### BotToken


- **Type**: API key
- **API key parameter name**: Authorization
- **Location**: HTTP header

### OAuth2


- **Type**: OAuth
- **Flow**: implicit
- **Authorization URL**: https://discord.com/api/oauth2/authorize
- **Scopes**: 
  - activities.invites.write: allows your app to send activity invites - requires Discord approval (NOT REQUIRED FOR GAMESDK ACTIVITY MANAGER)
  - activities.read: allows your app to fetch data from a user&#39;s \&quot;Now Playing/Recently Played\&quot; list - requires Discord approval
  - activities.write: allows your app to update a user&#39;s activity - requires Discord approval (NOT REQUIRED FOR GAMESDK ACTIVITY MANAGER)
  - applications.builds.read: allows your app to read build data for a user&#39;s applications
  - applications.builds.upload: allows your app to upload/update builds for a user&#39;s applications - requires Discord approval
  - applications.commands: allows your app to use commands in a guild
  - applications.commands.permissions.update: allows your app to update permissions for its commands in a guild a user has permissions to
  - applications.entitlements: allows your app to read entitlements for a user&#39;s applications
  - applications.store.update: allows your app to read and update store data (SKUs, store listings, achievements, etc.) for a user&#39;s applications
  - bot: for oauth2 bots, this puts the bot in the user&#39;s selected guild by default
  - connections: allows /users/@me/connections to return linked third-party accounts
  - dm_channels.read: allows your app to see information about the user&#39;s DMs and group DMs - requires Discord approval
  - email: enables /users/@me to return an email
  - gdm.join: allows your app to join users to a group dm
  - guilds: allows /users/@me/guilds to return basic information about all of a user&#39;s guilds
  - guilds.join: allows /guilds/{guild.id}/members/{user.id} to be used for joining users to a guild
  - guilds.members.read: allows /users/@me/guilds/{guild.id}/member to return a user&#39;s member information in a guild
  - identify: allows /users/@me without email
  - messages.read: for local rpc server api access, this allows you to read messages from all client channels (otherwise restricted to channels/guilds your app creates)
  - openid: for OpenID Connect, this allows your app to receive user id and basic profile information
  - relationships.read: allows your app to know a user&#39;s friends and implicit relationships - requires Discord approval
  - rpc: for local rpc server access, this allows you to control a user&#39;s local Discord client - requires Discord approval
  - rpc.activities.write: for local rpc server access, this allows you to update a user&#39;s activity - requires Discord approval
  - rpc.notifications.read: for local rpc server access, this allows you to receive notifications pushed out to the user - requires Discord approval
  - rpc.screenshare.read: for local rpc server access, this allows you to read a user&#39;s screenshare status- requires Discord approval
  - rpc.screenshare.write: for local rpc server access, this allows you to update a user&#39;s screenshare settings- requires Discord approval
  - rpc.video.read: for local rpc server access, this allows you to read a user&#39;s video status - requires Discord approval
  - rpc.video.write: for local rpc server access, this allows you to update a user&#39;s video settings - requires Discord approval
  - rpc.voice.read: for local rpc server access, this allows you to read a user&#39;s voice settings and listen for voice events - requires Discord approval
  - rpc.voice.write: for local rpc server access, this allows you to update a user&#39;s voice settings - requires Discord approval
  - voice: allows your app to connect to voice on user&#39;s behalf and see all the voice members - requires Discord approval
  - webhook.incoming: this generates a webhook that is returned in the oauth token response for authorization code grants

### OAuth2


- **Type**: OAuth
- **Flow**: application
- **Authorization URL**: 
- **Scopes**: 
  - activities.invites.write: allows your app to send activity invites - requires Discord approval (NOT REQUIRED FOR GAMESDK ACTIVITY MANAGER)
  - activities.read: allows your app to fetch data from a user&#39;s \&quot;Now Playing/Recently Played\&quot; list - requires Discord approval
  - activities.write: allows your app to update a user&#39;s activity - requires Discord approval (NOT REQUIRED FOR GAMESDK ACTIVITY MANAGER)
  - applications.builds.read: allows your app to read build data for a user&#39;s applications
  - applications.builds.upload: allows your app to upload/update builds for a user&#39;s applications - requires Discord approval
  - applications.commands: allows your app to use commands in a guild
  - applications.commands.permissions.update: allows your app to update permissions for its commands in a guild a user has permissions to
  - applications.commands.update: allows your app to update its commands using a Bearer token - client credentials grant only
  - applications.entitlements: allows your app to read entitlements for a user&#39;s applications
  - applications.store.update: allows your app to read and update store data (SKUs, store listings, achievements, etc.) for a user&#39;s applications
  - bot: for oauth2 bots, this puts the bot in the user&#39;s selected guild by default
  - connections: allows /users/@me/connections to return linked third-party accounts
  - dm_channels.read: allows your app to see information about the user&#39;s DMs and group DMs - requires Discord approval
  - email: enables /users/@me to return an email
  - gdm.join: allows your app to join users to a group dm
  - guilds: allows /users/@me/guilds to return basic information about all of a user&#39;s guilds
  - guilds.join: allows /guilds/{guild.id}/members/{user.id} to be used for joining users to a guild
  - guilds.members.read: allows /users/@me/guilds/{guild.id}/member to return a user&#39;s member information in a guild
  - identify: allows /users/@me without email
  - messages.read: for local rpc server api access, this allows you to read messages from all client channels (otherwise restricted to channels/guilds your app creates)
  - openid: for OpenID Connect, this allows your app to receive user id and basic profile information
  - relationships.read: allows your app to know a user&#39;s friends and implicit relationships - requires Discord approval
  - rpc: for local rpc server access, this allows you to control a user&#39;s local Discord client - requires Discord approval
  - rpc.activities.write: for local rpc server access, this allows you to update a user&#39;s activity - requires Discord approval
  - rpc.notifications.read: for local rpc server access, this allows you to receive notifications pushed out to the user - requires Discord approval
  - rpc.screenshare.read: for local rpc server access, this allows you to read a user&#39;s screenshare status- requires Discord approval
  - rpc.screenshare.write: for local rpc server access, this allows you to update a user&#39;s screenshare settings- requires Discord approval
  - rpc.video.read: for local rpc server access, this allows you to read a user&#39;s video status - requires Discord approval
  - rpc.video.write: for local rpc server access, this allows you to update a user&#39;s video settings - requires Discord approval
  - rpc.voice.read: for local rpc server access, this allows you to read a user&#39;s voice settings and listen for voice events - requires Discord approval
  - rpc.voice.write: for local rpc server access, this allows you to update a user&#39;s voice settings - requires Discord approval
  - voice: allows your app to connect to voice on user&#39;s behalf and see all the voice members - requires Discord approval
  - webhook.incoming: this generates a webhook that is returned in the oauth token response for authorization code grants

### OAuth2


- **Type**: OAuth
- **Flow**: accessCode
- **Authorization URL**: https://discord.com/api/oauth2/authorize
- **Scopes**: 
  - activities.invites.write: allows your app to send activity invites - requires Discord approval (NOT REQUIRED FOR GAMESDK ACTIVITY MANAGER)
  - activities.read: allows your app to fetch data from a user&#39;s \&quot;Now Playing/Recently Played\&quot; list - requires Discord approval
  - activities.write: allows your app to update a user&#39;s activity - requires Discord approval (NOT REQUIRED FOR GAMESDK ACTIVITY MANAGER)
  - applications.builds.read: allows your app to read build data for a user&#39;s applications
  - applications.builds.upload: allows your app to upload/update builds for a user&#39;s applications - requires Discord approval
  - applications.commands: allows your app to use commands in a guild
  - applications.commands.permissions.update: allows your app to update permissions for its commands in a guild a user has permissions to
  - applications.entitlements: allows your app to read entitlements for a user&#39;s applications
  - applications.store.update: allows your app to read and update store data (SKUs, store listings, achievements, etc.) for a user&#39;s applications
  - bot: for oauth2 bots, this puts the bot in the user&#39;s selected guild by default
  - connections: allows /users/@me/connections to return linked third-party accounts
  - dm_channels.read: allows your app to see information about the user&#39;s DMs and group DMs - requires Discord approval
  - email: enables /users/@me to return an email
  - gdm.join: allows your app to join users to a group dm
  - guilds: allows /users/@me/guilds to return basic information about all of a user&#39;s guilds
  - guilds.join: allows /guilds/{guild.id}/members/{user.id} to be used for joining users to a guild
  - guilds.members.read: allows /users/@me/guilds/{guild.id}/member to return a user&#39;s member information in a guild
  - identify: allows /users/@me without email
  - messages.read: for local rpc server api access, this allows you to read messages from all client channels (otherwise restricted to channels/guilds your app creates)
  - openid: for OpenID Connect, this allows your app to receive user id and basic profile information
  - relationships.read: allows your app to know a user&#39;s friends and implicit relationships - requires Discord approval
  - role_connections.write: allows your app to update a user&#39;s connection and metadata for the app
  - rpc: for local rpc server access, this allows you to control a user&#39;s local Discord client - requires Discord approval
  - rpc.activities.write: for local rpc server access, this allows you to update a user&#39;s activity - requires Discord approval
  - rpc.notifications.read: for local rpc server access, this allows you to receive notifications pushed out to the user - requires Discord approval
  - rpc.screenshare.read: for local rpc server access, this allows you to read a user&#39;s screenshare status- requires Discord approval
  - rpc.screenshare.write: for local rpc server access, this allows you to update a user&#39;s screenshare settings- requires Discord approval
  - rpc.video.read: for local rpc server access, this allows you to read a user&#39;s video status - requires Discord approval
  - rpc.video.write: for local rpc server access, this allows you to update a user&#39;s video settings - requires Discord approval
  - rpc.voice.read: for local rpc server access, this allows you to read a user&#39;s voice settings and listen for voice events - requires Discord approval
  - rpc.voice.write: for local rpc server access, this allows you to update a user&#39;s voice settings - requires Discord approval
  - voice: allows your app to connect to voice on user&#39;s behalf and see all the voice members - requires Discord approval
  - webhook.incoming: this generates a webhook that is returned in the oauth token response for authorization code grants


## Author




## License

MIT for more information visit [MIT]()