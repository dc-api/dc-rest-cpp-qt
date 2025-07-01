/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#ifndef OAI_OAIDefaultApi_H
#define OAI_OAIDefaultApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIActivitiesAttachmentResponse.h"
#include "OAIAdd_group_dm_user_201_response.h"
#include "OAIAdd_group_dm_user_request.h"
#include "OAIAdd_guild_member_request.h"
#include "OAIAdd_lobby_member_request.h"
#include "OAIApplicationCommandCreateRequest.h"
#include "OAIApplicationCommandPatchRequestPartial.h"
#include "OAIApplicationCommandResponse.h"
#include "OAIApplicationCommandUpdateRequest.h"
#include "OAIApplicationFormPartial.h"
#include "OAIApplicationRoleConnectionsMetadataItemRequest.h"
#include "OAIApplicationRoleConnectionsMetadataItemResponse.h"
#include "OAIApplicationUserRoleConnectionResponse.h"
#include "OAIBan_user_from_guild_request.h"
#include "OAIBotAccountPatchRequest.h"
#include "OAIBulkBanUsersResponse.h"
#include "OAIBulkLobbyMemberRequest.h"
#include "OAIBulk_ban_users_from_guild_request.h"
#include "OAIBulk_delete_messages_request.h"
#include "OAIBulk_update_guild_channels_request_inner.h"
#include "OAIBulk_update_guild_roles_request_inner.h"
#include "OAIChannelFollowerResponse.h"
#include "OAICommandPermissionsResponse.h"
#include "OAIConnectedAccountResponse.h"
#include "OAICreateEntitlementRequestData.h"
#include "OAICreateGuildChannelRequest.h"
#include "OAICreatePrivateChannelRequest.h"
#include "OAICreateTextThreadWithMessageRequest.h"
#include "OAICreate_application_emoji_request.h"
#include "OAICreate_auto_moderation_rule_200_response.h"
#include "OAICreate_auto_moderation_rule_request.h"
#include "OAICreate_channel_invite_request.h"
#include "OAICreate_guild_emoji_request.h"
#include "OAICreate_guild_from_template_request.h"
#include "OAICreate_guild_role_request.h"
#include "OAICreate_guild_scheduled_event_request.h"
#include "OAICreate_guild_template_request.h"
#include "OAICreate_interaction_response_request.h"
#include "OAICreate_lobby_request.h"
#include "OAICreate_message_request.h"
#include "OAICreate_or_join_lobby_request.h"
#include "OAICreate_stage_instance_request.h"
#include "OAICreate_thread_request.h"
#include "OAICreate_webhook_request.h"
#include "OAICreatedThreadResponse.h"
#include "OAIEdit_lobby_channel_link_request.h"
#include "OAIEmbeddedActivityInstance.h"
#include "OAIEmojiResponse.h"
#include "OAIEntitlementResponse.h"
#include "OAIErrorResponse.h"
#include "OAIExecute_webhook_request.h"
#include "OAIFollow_channel_request.h"
#include "OAIGatewayBotResponse.h"
#include "OAIGatewayResponse.h"
#include "OAIGet_channel_200_response.h"
#include "OAIGet_entitlements_sku_ids_parameter.h"
#include "OAIGet_sticker_200_response.h"
#include "OAIGithubWebhook.h"
#include "OAIGuildAuditLogResponse.h"
#include "OAIGuildBanResponse.h"
#include "OAIGuildChannelResponse.h"
#include "OAIGuildCreateRequest.h"
#include "OAIGuildHomeSettingsResponse.h"
#include "OAIGuildIncomingWebhookResponse.h"
#include "OAIGuildMFALevelResponse.h"
#include "OAIGuildMemberResponse.h"
#include "OAIGuildOnboardingResponse.h"
#include "OAIGuildPatchRequestPartial.h"
#include "OAIGuildPreviewResponse.h"
#include "OAIGuildPruneResponse.h"
#include "OAIGuildResponse.h"
#include "OAIGuildRoleResponse.h"
#include "OAIGuildStickerResponse.h"
#include "OAIGuildTemplateResponse.h"
#include "OAIGuildWelcomeScreenResponse.h"
#include "OAIGuildWithCountsResponse.h"
#include "OAIIncomingWebhookUpdateRequestPartial.h"
#include "OAIInteractionCallbackResponse.h"
#include "OAIListApplicationEmojisResponse.h"
#include "OAIListGuildSoundboardSoundsResponse.h"
#include "OAIList_auto_moderation_rules_200_response_inner.h"
#include "OAIList_channel_invites_200_response_inner.h"
#include "OAIList_channel_webhooks_200_response_inner.h"
#include "OAIList_guild_integrations_200_response_inner.h"
#include "OAIList_guild_scheduled_events_200_response_inner.h"
#include "OAILobbyMemberResponse.h"
#include "OAILobbyMessageResponse.h"
#include "OAILobbyResponse.h"
#include "OAIMessageCreateRequest.h"
#include "OAIMessageEditRequestPartial.h"
#include "OAIMessageResponse.h"
#include "OAIMyGuildResponse.h"
#include "OAIOAuth2GetAuthorizationResponse.h"
#include "OAIOAuth2GetKeys.h"
#include "OAIOAuth2GetOpenIDConnectUserInfoResponse.h"
#include "OAIObject.h"
#include "OAIPartner_sdk_unmerge_provisional_account_request.h"
#include "OAIPinnedMessagesResponse.h"
#include "OAIPollAnswerDetailsResponse.h"
#include "OAIPrivateApplicationResponse.h"
#include "OAIPrivateGuildMemberResponse.h"
#include "OAIProvisionalTokenResponse.h"
#include "OAIPrune_guild_request.h"
#include "OAISDKMessageRequest.h"
#include "OAIScheduledEventUserResponse.h"
#include "OAISet_channel_permission_overwrite_request.h"
#include "OAISet_guild_application_command_permissions_request.h"
#include "OAISet_guild_mfa_level_request.h"
#include "OAISlackWebhook.h"
#include "OAISoundboardCreateRequest.h"
#include "OAISoundboardPatchRequestPartial.h"
#include "OAISoundboardSoundResponse.h"
#include "OAISoundboardSoundSendRequest.h"
#include "OAIStageInstanceResponse.h"
#include "OAIStickerPackCollectionResponse.h"
#include "OAIStickerPackResponse.h"
#include "OAIThreadMemberResponse.h"
#include "OAIThreadResponse.h"
#include "OAIThreadSearchResponse.h"
#include "OAIThread_search_tag_parameter.h"
#include "OAIThreadsResponse.h"
#include "OAIUpdateApplicationUserRoleConnectionRequest.h"
#include "OAIUpdateGuildOnboardingRequest.h"
#include "OAIUpdate_application_emoji_request.h"
#include "OAIUpdate_auto_moderation_rule_request.h"
#include "OAIUpdate_channel_request.h"
#include "OAIUpdate_guild_emoji_request.h"
#include "OAIUpdate_guild_member_request.h"
#include "OAIUpdate_guild_scheduled_event_request.h"
#include "OAIUpdate_guild_sticker_request.h"
#include "OAIUpdate_guild_template_request.h"
#include "OAIUpdate_guild_widget_settings_request.h"
#include "OAIUpdate_message_request.h"
#include "OAIUpdate_my_guild_member_request.h"
#include "OAIUpdate_original_webhook_message_request.h"
#include "OAIUpdate_self_voice_state_request.h"
#include "OAIUpdate_stage_instance_request.h"
#include "OAIUpdate_voice_state_request.h"
#include "OAIUpdate_webhook_by_token_request.h"
#include "OAIUpdate_webhook_request.h"
#include "OAIUserGuildOnboardingResponse.h"
#include "OAIUserPIIResponse.h"
#include "OAIUserResponse.h"
#include "OAIVanityURLResponse.h"
#include "OAIVoiceRegionResponse.h"
#include "OAIVoiceStateResponse.h"
#include "OAIWelcomeScreenPatchRequestPartial.h"
#include "OAIWidgetResponse.h"
#include "OAIWidgetSettingsResponse.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace dc_rest {

class OAIDefaultApi : public QObject {
    Q_OBJECT

public:
    OAIDefaultApi(const int timeOut = 0);
    ~OAIDefaultApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  user_id QString [required]
    * @param[in]  oai_add_group_dm_user_request OAIAdd_group_dm_user_request [required]
    */
    virtual void addGroupDmUser(const QString &channel_id, const QString &user_id, const OAIAdd_group_dm_user_request &oai_add_group_dm_user_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  user_id QString [required]
    * @param[in]  oai_add_guild_member_request OAIAdd_guild_member_request [required]
    */
    virtual void addGuildMember(const QString &guild_id, const QString &user_id, const OAIAdd_guild_member_request &oai_add_guild_member_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  user_id QString [required]
    * @param[in]  role_id QString [required]
    */
    virtual void addGuildMemberRole(const QString &guild_id, const QString &user_id, const QString &role_id);

    /**
    * @param[in]  lobby_id QString [required]
    * @param[in]  user_id QString [required]
    * @param[in]  oai_add_lobby_member_request OAIAdd_lobby_member_request [required]
    */
    virtual void addLobbyMember(const QString &lobby_id, const QString &user_id, const OAIAdd_lobby_member_request &oai_add_lobby_member_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    * @param[in]  emoji_name QString [required]
    */
    virtual void addMyMessageReaction(const QString &channel_id, const QString &message_id, const QString &emoji_name);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  user_id QString [required]
    */
    virtual void addThreadMember(const QString &channel_id, const QString &user_id);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  instance_id QString [required]
    */
    virtual void applicationsGetActivityInstance(const QString &application_id, const QString &instance_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  user_id QString [required]
    * @param[in]  oai_ban_user_from_guild_request OAIBan_user_from_guild_request [required]
    */
    virtual void banUserFromGuild(const QString &guild_id, const QString &user_id, const OAIBan_user_from_guild_request &oai_ban_user_from_guild_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_bulk_ban_users_from_guild_request OAIBulk_ban_users_from_guild_request [required]
    */
    virtual void bulkBanUsersFromGuild(const QString &guild_id, const OAIBulk_ban_users_from_guild_request &oai_bulk_ban_users_from_guild_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  oai_bulk_delete_messages_request OAIBulk_delete_messages_request [required]
    */
    virtual void bulkDeleteMessages(const QString &channel_id, const OAIBulk_delete_messages_request &oai_bulk_delete_messages_request);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  oai_application_command_update_request QList<OAIApplicationCommandUpdateRequest> [required]
    */
    virtual void bulkSetApplicationCommands(const QString &application_id, const QList<OAIApplicationCommandUpdateRequest> &oai_application_command_update_request);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_application_command_update_request QList<OAIApplicationCommandUpdateRequest> [required]
    */
    virtual void bulkSetGuildApplicationCommands(const QString &application_id, const QString &guild_id, const QList<OAIApplicationCommandUpdateRequest> &oai_application_command_update_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_bulk_update_guild_channels_request_inner QList<OAIBulk_update_guild_channels_request_inner> [required]
    */
    virtual void bulkUpdateGuildChannels(const QString &guild_id, const QList<OAIBulk_update_guild_channels_request_inner> &oai_bulk_update_guild_channels_request_inner);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_bulk_update_guild_roles_request_inner QList<OAIBulk_update_guild_roles_request_inner> [required]
    */
    virtual void bulkUpdateGuildRoles(const QString &guild_id, const QList<OAIBulk_update_guild_roles_request_inner> &oai_bulk_update_guild_roles_request_inner);

    /**
    * @param[in]  lobby_id QString [required]
    * @param[in]  oai_bulk_lobby_member_request QList<OAIBulkLobbyMemberRequest> [required]
    */
    virtual void bulkUpdateLobbyMembers(const QString &lobby_id, const QList<OAIBulkLobbyMemberRequest> &oai_bulk_lobby_member_request);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  entitlement_id QString [required]
    */
    virtual void consumeEntitlement(const QString &application_id, const QString &entitlement_id);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  oai_application_command_create_request OAIApplicationCommandCreateRequest [required]
    */
    virtual void createApplicationCommand(const QString &application_id, const OAIApplicationCommandCreateRequest &oai_application_command_create_request);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  oai_create_application_emoji_request OAICreate_application_emoji_request [required]
    */
    virtual void createApplicationEmoji(const QString &application_id, const OAICreate_application_emoji_request &oai_create_application_emoji_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_create_auto_moderation_rule_request OAICreate_auto_moderation_rule_request [required]
    */
    virtual void createAutoModerationRule(const QString &guild_id, const OAICreate_auto_moderation_rule_request &oai_create_auto_moderation_rule_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  oai_create_channel_invite_request OAICreate_channel_invite_request [required]
    */
    virtual void createChannelInvite(const QString &channel_id, const OAICreate_channel_invite_request &oai_create_channel_invite_request);

    /**
    * @param[in]  oai_create_private_channel_request OAICreatePrivateChannelRequest [required]
    */
    virtual void createDm(const OAICreatePrivateChannelRequest &oai_create_private_channel_request);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  oai_create_entitlement_request_data OAICreateEntitlementRequestData [required]
    */
    virtual void createEntitlement(const QString &application_id, const OAICreateEntitlementRequestData &oai_create_entitlement_request_data);

    /**
    * @param[in]  oai_guild_create_request OAIGuildCreateRequest [required]
    */
    virtual void createGuild(const OAIGuildCreateRequest &oai_guild_create_request);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_application_command_create_request OAIApplicationCommandCreateRequest [required]
    */
    virtual void createGuildApplicationCommand(const QString &application_id, const QString &guild_id, const OAIApplicationCommandCreateRequest &oai_application_command_create_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_create_guild_channel_request OAICreateGuildChannelRequest [required]
    */
    virtual void createGuildChannel(const QString &guild_id, const OAICreateGuildChannelRequest &oai_create_guild_channel_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_create_guild_emoji_request OAICreate_guild_emoji_request [required]
    */
    virtual void createGuildEmoji(const QString &guild_id, const OAICreate_guild_emoji_request &oai_create_guild_emoji_request);

    /**
    * @param[in]  code QString [required]
    * @param[in]  oai_create_guild_from_template_request OAICreate_guild_from_template_request [required]
    */
    virtual void createGuildFromTemplate(const QString &code, const OAICreate_guild_from_template_request &oai_create_guild_from_template_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_create_guild_role_request OAICreate_guild_role_request [required]
    */
    virtual void createGuildRole(const QString &guild_id, const OAICreate_guild_role_request &oai_create_guild_role_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_create_guild_scheduled_event_request OAICreate_guild_scheduled_event_request [required]
    */
    virtual void createGuildScheduledEvent(const QString &guild_id, const OAICreate_guild_scheduled_event_request &oai_create_guild_scheduled_event_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_soundboard_create_request OAISoundboardCreateRequest [required]
    */
    virtual void createGuildSoundboardSound(const QString &guild_id, const OAISoundboardCreateRequest &oai_soundboard_create_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  name QString [required]
    * @param[in]  tags QString [required]
    * @param[in]  file QString [required]
    * @param[in]  description QString [optional]
    */
    virtual void createGuildSticker(const QString &guild_id, const QString &name, const QString &tags, const QString &file, const ::dc_rest::OptionalParam<QString> &description = ::dc_rest::OptionalParam<QString>());

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_create_guild_template_request OAICreate_guild_template_request [required]
    */
    virtual void createGuildTemplate(const QString &guild_id, const OAICreate_guild_template_request &oai_create_guild_template_request);

    /**
    * @param[in]  interaction_id QString [required]
    * @param[in]  interaction_token QString [required]
    * @param[in]  oai_create_interaction_response_request OAICreate_interaction_response_request [required]
    * @param[in]  with_response bool [optional]
    */
    virtual void createInteractionResponse(const QString &interaction_id, const QString &interaction_token, const OAICreate_interaction_response_request &oai_create_interaction_response_request, const ::dc_rest::OptionalParam<bool> &with_response = ::dc_rest::OptionalParam<bool>());

    /**
    * @param[in]  oai_create_lobby_request OAICreate_lobby_request [required]
    */
    virtual void createLobby(const OAICreate_lobby_request &oai_create_lobby_request);

    /**
    * @param[in]  lobby_id QString [required]
    * @param[in]  oaisdk_message_request OAISDKMessageRequest [required]
    */
    virtual void createLobbyMessage(const QString &lobby_id, const OAISDKMessageRequest &oaisdk_message_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  oai_message_create_request OAIMessageCreateRequest [required]
    */
    virtual void createMessage(const QString &channel_id, const OAIMessageCreateRequest &oai_message_create_request);

    /**
    * @param[in]  oai_create_or_join_lobby_request OAICreate_or_join_lobby_request [required]
    */
    virtual void createOrJoinLobby(const OAICreate_or_join_lobby_request &oai_create_or_join_lobby_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    */
    virtual void createPin(const QString &channel_id, const QString &message_id);

    /**
    * @param[in]  oai_create_stage_instance_request OAICreate_stage_instance_request [required]
    */
    virtual void createStageInstance(const OAICreate_stage_instance_request &oai_create_stage_instance_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  oai_create_thread_request OAICreate_thread_request [required]
    */
    virtual void createThread(const QString &channel_id, const OAICreate_thread_request &oai_create_thread_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    * @param[in]  oai_create_text_thread_with_message_request OAICreateTextThreadWithMessageRequest [required]
    */
    virtual void createThreadFromMessage(const QString &channel_id, const QString &message_id, const OAICreateTextThreadWithMessageRequest &oai_create_text_thread_with_message_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  oai_create_webhook_request OAICreate_webhook_request [required]
    */
    virtual void createWebhook(const QString &channel_id, const OAICreate_webhook_request &oai_create_webhook_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    */
    virtual void crosspostMessage(const QString &channel_id, const QString &message_id);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    */
    virtual void deleteAllMessageReactions(const QString &channel_id, const QString &message_id);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    * @param[in]  emoji_name QString [required]
    */
    virtual void deleteAllMessageReactionsByEmoji(const QString &channel_id, const QString &message_id, const QString &emoji_name);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  command_id QString [required]
    */
    virtual void deleteApplicationCommand(const QString &application_id, const QString &command_id);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  emoji_id QString [required]
    */
    virtual void deleteApplicationEmoji(const QString &application_id, const QString &emoji_id);

    /**
    * @param[in]  application_id QString [required]
    */
    virtual void deleteApplicationUserRoleConnection(const QString &application_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  rule_id QString [required]
    */
    virtual void deleteAutoModerationRule(const QString &guild_id, const QString &rule_id);

    /**
    * @param[in]  channel_id QString [required]
    */
    virtual void deleteChannel(const QString &channel_id);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  overwrite_id QString [required]
    */
    virtual void deleteChannelPermissionOverwrite(const QString &channel_id, const QString &overwrite_id);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  entitlement_id QString [required]
    */
    virtual void deleteEntitlement(const QString &application_id, const QString &entitlement_id);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  user_id QString [required]
    */
    virtual void deleteGroupDmUser(const QString &channel_id, const QString &user_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void deleteGuild(const QString &guild_id);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  guild_id QString [required]
    * @param[in]  command_id QString [required]
    */
    virtual void deleteGuildApplicationCommand(const QString &application_id, const QString &guild_id, const QString &command_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  emoji_id QString [required]
    */
    virtual void deleteGuildEmoji(const QString &guild_id, const QString &emoji_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  integration_id QString [required]
    */
    virtual void deleteGuildIntegration(const QString &guild_id, const QString &integration_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  user_id QString [required]
    */
    virtual void deleteGuildMember(const QString &guild_id, const QString &user_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  user_id QString [required]
    * @param[in]  role_id QString [required]
    */
    virtual void deleteGuildMemberRole(const QString &guild_id, const QString &user_id, const QString &role_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  role_id QString [required]
    */
    virtual void deleteGuildRole(const QString &guild_id, const QString &role_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  guild_scheduled_event_id QString [required]
    */
    virtual void deleteGuildScheduledEvent(const QString &guild_id, const QString &guild_scheduled_event_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  sound_id QString [required]
    */
    virtual void deleteGuildSoundboardSound(const QString &guild_id, const QString &sound_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  sticker_id QString [required]
    */
    virtual void deleteGuildSticker(const QString &guild_id, const QString &sticker_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  code QString [required]
    */
    virtual void deleteGuildTemplate(const QString &guild_id, const QString &code);

    /**
    * @param[in]  lobby_id QString [required]
    * @param[in]  user_id QString [required]
    */
    virtual void deleteLobbyMember(const QString &lobby_id, const QString &user_id);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    */
    virtual void deleteMessage(const QString &channel_id, const QString &message_id);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    * @param[in]  emoji_name QString [required]
    */
    virtual void deleteMyMessageReaction(const QString &channel_id, const QString &message_id, const QString &emoji_name);

    /**
    * @param[in]  webhook_id QString [required]
    * @param[in]  webhook_token QString [required]
    * @param[in]  thread_id QString [optional]
    */
    virtual void deleteOriginalWebhookMessage(const QString &webhook_id, const QString &webhook_token, const ::dc_rest::OptionalParam<QString> &thread_id = ::dc_rest::OptionalParam<QString>());

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    */
    virtual void deletePin(const QString &channel_id, const QString &message_id);

    /**
    * @param[in]  channel_id QString [required]
    */
    virtual void deleteStageInstance(const QString &channel_id);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  user_id QString [required]
    */
    virtual void deleteThreadMember(const QString &channel_id, const QString &user_id);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    * @param[in]  emoji_name QString [required]
    * @param[in]  user_id QString [required]
    */
    virtual void deleteUserMessageReaction(const QString &channel_id, const QString &message_id, const QString &emoji_name, const QString &user_id);

    /**
    * @param[in]  webhook_id QString [required]
    */
    virtual void deleteWebhook(const QString &webhook_id);

    /**
    * @param[in]  webhook_id QString [required]
    * @param[in]  webhook_token QString [required]
    */
    virtual void deleteWebhookByToken(const QString &webhook_id, const QString &webhook_token);

    /**
    * @param[in]  webhook_id QString [required]
    * @param[in]  webhook_token QString [required]
    * @param[in]  message_id QString [required]
    * @param[in]  thread_id QString [optional]
    */
    virtual void deleteWebhookMessage(const QString &webhook_id, const QString &webhook_token, const QString &message_id, const ::dc_rest::OptionalParam<QString> &thread_id = ::dc_rest::OptionalParam<QString>());

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    */
    virtual void deprecatedCreatePin(const QString &channel_id, const QString &message_id);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    */
    virtual void deprecatedDeletePin(const QString &channel_id, const QString &message_id);

    /**
    * @param[in]  channel_id QString [required]
    */
    virtual void deprecatedListPins(const QString &channel_id);

    /**
    * @param[in]  lobby_id QString [required]
    * @param[in]  oai_create_lobby_request OAICreate_lobby_request [required]
    */
    virtual void editLobby(const QString &lobby_id, const OAICreate_lobby_request &oai_create_lobby_request);

    /**
    * @param[in]  lobby_id QString [required]
    * @param[in]  oai_edit_lobby_channel_link_request OAIEdit_lobby_channel_link_request [required]
    */
    virtual void editLobbyChannelLink(const QString &lobby_id, const OAIEdit_lobby_channel_link_request &oai_edit_lobby_channel_link_request);

    /**
    * @param[in]  webhook_id QString [required]
    * @param[in]  webhook_token QString [required]
    * @param[in]  oai_github_webhook OAIGithubWebhook [required]
    * @param[in]  wait bool [optional]
    * @param[in]  thread_id QString [optional]
    */
    virtual void executeGithubCompatibleWebhook(const QString &webhook_id, const QString &webhook_token, const OAIGithubWebhook &oai_github_webhook, const ::dc_rest::OptionalParam<bool> &wait = ::dc_rest::OptionalParam<bool>(), const ::dc_rest::OptionalParam<QString> &thread_id = ::dc_rest::OptionalParam<QString>());

    /**
    * @param[in]  webhook_id QString [required]
    * @param[in]  webhook_token QString [required]
    * @param[in]  oai_slack_webhook OAISlackWebhook [required]
    * @param[in]  wait bool [optional]
    * @param[in]  thread_id QString [optional]
    */
    virtual void executeSlackCompatibleWebhook(const QString &webhook_id, const QString &webhook_token, const OAISlackWebhook &oai_slack_webhook, const ::dc_rest::OptionalParam<bool> &wait = ::dc_rest::OptionalParam<bool>(), const ::dc_rest::OptionalParam<QString> &thread_id = ::dc_rest::OptionalParam<QString>());

    /**
    * @param[in]  webhook_id QString [required]
    * @param[in]  webhook_token QString [required]
    * @param[in]  oai_execute_webhook_request OAIExecute_webhook_request [required]
    * @param[in]  wait bool [optional]
    * @param[in]  thread_id QString [optional]
    * @param[in]  with_components bool [optional]
    */
    virtual void executeWebhook(const QString &webhook_id, const QString &webhook_token, const OAIExecute_webhook_request &oai_execute_webhook_request, const ::dc_rest::OptionalParam<bool> &wait = ::dc_rest::OptionalParam<bool>(), const ::dc_rest::OptionalParam<QString> &thread_id = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<bool> &with_components = ::dc_rest::OptionalParam<bool>());

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  oai_follow_channel_request OAIFollow_channel_request [required]
    */
    virtual void followChannel(const QString &channel_id, const OAIFollow_channel_request &oai_follow_channel_request);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void getActiveGuildThreads(const QString &guild_id);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    * @param[in]  answer_id qint32 [required]
    * @param[in]  after QString [optional]
    * @param[in]  limit qint32 [optional]
    */
    virtual void getAnswerVoters(const QString &channel_id, const QString &message_id, const qint32 &answer_id, const ::dc_rest::OptionalParam<QString> &after = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>());

    /**
    * @param[in]  application_id QString [required]
    */
    virtual void getApplication(const QString &application_id);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  command_id QString [required]
    */
    virtual void getApplicationCommand(const QString &application_id, const QString &command_id);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  emoji_id QString [required]
    */
    virtual void getApplicationEmoji(const QString &application_id, const QString &emoji_id);

    /**
    * @param[in]  application_id QString [required]
    */
    virtual void getApplicationRoleConnectionsMetadata(const QString &application_id);

    /**
    * @param[in]  application_id QString [required]
    */
    virtual void getApplicationUserRoleConnection(const QString &application_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  rule_id QString [required]
    */
    virtual void getAutoModerationRule(const QString &guild_id, const QString &rule_id);


    virtual void getBotGateway();

    /**
    * @param[in]  channel_id QString [required]
    */
    virtual void getChannel(const QString &channel_id);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  entitlement_id QString [required]
    */
    virtual void getEntitlement(const QString &application_id, const QString &entitlement_id);

    /**
    * @param[in]  sku_ids OAIGet_entitlements_sku_ids_parameter [required]
    * @param[in]  application_id QString [required]
    * @param[in]  user_id QString [optional]
    * @param[in]  guild_id QString [optional]
    * @param[in]  before QString [optional]
    * @param[in]  after QString [optional]
    * @param[in]  limit qint32 [optional]
    * @param[in]  exclude_ended bool [optional]
    * @param[in]  exclude_deleted bool [optional]
    * @param[in]  only_active bool [optional]
    */
    virtual void getEntitlements(const OAIGet_entitlements_sku_ids_parameter &sku_ids, const QString &application_id, const ::dc_rest::OptionalParam<QString> &user_id = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<QString> &guild_id = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<QString> &before = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<QString> &after = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>(), const ::dc_rest::OptionalParam<bool> &exclude_ended = ::dc_rest::OptionalParam<bool>(), const ::dc_rest::OptionalParam<bool> &exclude_deleted = ::dc_rest::OptionalParam<bool>(), const ::dc_rest::OptionalParam<bool> &only_active = ::dc_rest::OptionalParam<bool>());


    virtual void getGateway();

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  with_counts bool [optional]
    */
    virtual void getGuild(const QString &guild_id, const ::dc_rest::OptionalParam<bool> &with_counts = ::dc_rest::OptionalParam<bool>());

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  guild_id QString [required]
    * @param[in]  command_id QString [required]
    */
    virtual void getGuildApplicationCommand(const QString &application_id, const QString &guild_id, const QString &command_id);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  guild_id QString [required]
    * @param[in]  command_id QString [required]
    */
    virtual void getGuildApplicationCommandPermissions(const QString &application_id, const QString &guild_id, const QString &command_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  user_id QString [required]
    */
    virtual void getGuildBan(const QString &guild_id, const QString &user_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  emoji_id QString [required]
    */
    virtual void getGuildEmoji(const QString &guild_id, const QString &emoji_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  user_id QString [required]
    */
    virtual void getGuildMember(const QString &guild_id, const QString &user_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void getGuildNewMemberWelcome(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void getGuildPreview(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  role_id QString [required]
    */
    virtual void getGuildRole(const QString &guild_id, const QString &role_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  guild_scheduled_event_id QString [required]
    * @param[in]  with_user_count bool [optional]
    */
    virtual void getGuildScheduledEvent(const QString &guild_id, const QString &guild_scheduled_event_id, const ::dc_rest::OptionalParam<bool> &with_user_count = ::dc_rest::OptionalParam<bool>());

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  sound_id QString [required]
    */
    virtual void getGuildSoundboardSound(const QString &guild_id, const QString &sound_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  sticker_id QString [required]
    */
    virtual void getGuildSticker(const QString &guild_id, const QString &sticker_id);

    /**
    * @param[in]  code QString [required]
    */
    virtual void getGuildTemplate(const QString &code);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void getGuildVanityUrl(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void getGuildWebhooks(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void getGuildWelcomeScreen(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void getGuildWidget(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  style QString [optional]
    */
    virtual void getGuildWidgetPng(const QString &guild_id, const ::dc_rest::OptionalParam<QString> &style = ::dc_rest::OptionalParam<QString>());

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void getGuildWidgetSettings(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void getGuildsOnboarding(const QString &guild_id);

    /**
    * @param[in]  lobby_id QString [required]
    */
    virtual void getLobby(const QString &lobby_id);

    /**
    * @param[in]  lobby_id QString [required]
    * @param[in]  limit qint32 [optional]
    */
    virtual void getLobbyMessages(const QString &lobby_id, const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>());

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    */
    virtual void getMessage(const QString &channel_id, const QString &message_id);


    virtual void getMyApplication();

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void getMyGuildMember(const QString &guild_id);


    virtual void getMyOauth2Application();


    virtual void getMyOauth2Authorization();


    virtual void getMyUser();


    virtual void getOpenidConnectUserinfo();

    /**
    * @param[in]  webhook_id QString [required]
    * @param[in]  webhook_token QString [required]
    * @param[in]  thread_id QString [optional]
    */
    virtual void getOriginalWebhookMessage(const QString &webhook_id, const QString &webhook_token, const ::dc_rest::OptionalParam<QString> &thread_id = ::dc_rest::OptionalParam<QString>());


    virtual void getPublicKeys();

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void getSelfVoiceState(const QString &guild_id);


    virtual void getSoundboardDefaultSounds();

    /**
    * @param[in]  channel_id QString [required]
    */
    virtual void getStageInstance(const QString &channel_id);

    /**
    * @param[in]  sticker_id QString [required]
    */
    virtual void getSticker(const QString &sticker_id);

    /**
    * @param[in]  pack_id QString [required]
    */
    virtual void getStickerPack(const QString &pack_id);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  user_id QString [required]
    * @param[in]  with_member bool [optional]
    */
    virtual void getThreadMember(const QString &channel_id, const QString &user_id, const ::dc_rest::OptionalParam<bool> &with_member = ::dc_rest::OptionalParam<bool>());

    /**
    * @param[in]  user_id QString [required]
    */
    virtual void getUser(const QString &user_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  user_id QString [required]
    */
    virtual void getVoiceState(const QString &guild_id, const QString &user_id);

    /**
    * @param[in]  webhook_id QString [required]
    */
    virtual void getWebhook(const QString &webhook_id);

    /**
    * @param[in]  webhook_id QString [required]
    * @param[in]  webhook_token QString [required]
    */
    virtual void getWebhookByToken(const QString &webhook_id, const QString &webhook_token);

    /**
    * @param[in]  webhook_id QString [required]
    * @param[in]  webhook_token QString [required]
    * @param[in]  message_id QString [required]
    * @param[in]  thread_id QString [optional]
    */
    virtual void getWebhookMessage(const QString &webhook_id, const QString &webhook_token, const QString &message_id, const ::dc_rest::OptionalParam<QString> &thread_id = ::dc_rest::OptionalParam<QString>());

    /**
    * @param[in]  code QString [required]
    * @param[in]  with_counts bool [optional]
    * @param[in]  guild_scheduled_event_id QString [optional]
    */
    virtual void inviteResolve(const QString &code, const ::dc_rest::OptionalParam<bool> &with_counts = ::dc_rest::OptionalParam<bool>(), const ::dc_rest::OptionalParam<QString> &guild_scheduled_event_id = ::dc_rest::OptionalParam<QString>());

    /**
    * @param[in]  code QString [required]
    */
    virtual void inviteRevoke(const QString &code);

    /**
    * @param[in]  channel_id QString [required]
    */
    virtual void joinThread(const QString &channel_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void leaveGuild(const QString &guild_id);

    /**
    * @param[in]  lobby_id QString [required]
    */
    virtual void leaveLobby(const QString &lobby_id);

    /**
    * @param[in]  channel_id QString [required]
    */
    virtual void leaveThread(const QString &channel_id);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  with_localizations bool [optional]
    */
    virtual void listApplicationCommands(const QString &application_id, const ::dc_rest::OptionalParam<bool> &with_localizations = ::dc_rest::OptionalParam<bool>());

    /**
    * @param[in]  application_id QString [required]
    */
    virtual void listApplicationEmojis(const QString &application_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void listAutoModerationRules(const QString &guild_id);

    /**
    * @param[in]  channel_id QString [required]
    */
    virtual void listChannelInvites(const QString &channel_id);

    /**
    * @param[in]  channel_id QString [required]
    */
    virtual void listChannelWebhooks(const QString &channel_id);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  guild_id QString [required]
    */
    virtual void listGuildApplicationCommandPermissions(const QString &application_id, const QString &guild_id);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  guild_id QString [required]
    * @param[in]  with_localizations bool [optional]
    */
    virtual void listGuildApplicationCommands(const QString &application_id, const QString &guild_id, const ::dc_rest::OptionalParam<bool> &with_localizations = ::dc_rest::OptionalParam<bool>());

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  user_id QString [optional]
    * @param[in]  target_id QString [optional]
    * @param[in]  action_type qint32 [optional]
    * @param[in]  before QString [optional]
    * @param[in]  after QString [optional]
    * @param[in]  limit qint32 [optional]
    */
    virtual void listGuildAuditLogEntries(const QString &guild_id, const ::dc_rest::OptionalParam<QString> &user_id = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<QString> &target_id = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<qint32> &action_type = ::dc_rest::OptionalParam<qint32>(), const ::dc_rest::OptionalParam<QString> &before = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<QString> &after = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>());

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  limit qint32 [optional]
    * @param[in]  before QString [optional]
    * @param[in]  after QString [optional]
    */
    virtual void listGuildBans(const QString &guild_id, const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>(), const ::dc_rest::OptionalParam<QString> &before = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<QString> &after = ::dc_rest::OptionalParam<QString>());

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void listGuildChannels(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void listGuildEmojis(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void listGuildIntegrations(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void listGuildInvites(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  limit qint32 [optional]
    * @param[in]  after qint32 [optional]
    */
    virtual void listGuildMembers(const QString &guild_id, const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>(), const ::dc_rest::OptionalParam<qint32> &after = ::dc_rest::OptionalParam<qint32>());

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void listGuildRoles(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  guild_scheduled_event_id QString [required]
    * @param[in]  with_member bool [optional]
    * @param[in]  limit qint32 [optional]
    * @param[in]  before QString [optional]
    * @param[in]  after QString [optional]
    */
    virtual void listGuildScheduledEventUsers(const QString &guild_id, const QString &guild_scheduled_event_id, const ::dc_rest::OptionalParam<bool> &with_member = ::dc_rest::OptionalParam<bool>(), const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>(), const ::dc_rest::OptionalParam<QString> &before = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<QString> &after = ::dc_rest::OptionalParam<QString>());

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  with_user_count bool [optional]
    */
    virtual void listGuildScheduledEvents(const QString &guild_id, const ::dc_rest::OptionalParam<bool> &with_user_count = ::dc_rest::OptionalParam<bool>());

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void listGuildSoundboardSounds(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void listGuildStickers(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void listGuildTemplates(const QString &guild_id);

    /**
    * @param[in]  guild_id QString [required]
    */
    virtual void listGuildVoiceRegions(const QString &guild_id);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    * @param[in]  emoji_name QString [required]
    * @param[in]  after QString [optional]
    * @param[in]  limit qint32 [optional]
    * @param[in]  type qint32 [optional]
    */
    virtual void listMessageReactionsByEmoji(const QString &channel_id, const QString &message_id, const QString &emoji_name, const ::dc_rest::OptionalParam<QString> &after = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>(), const ::dc_rest::OptionalParam<qint32> &type = ::dc_rest::OptionalParam<qint32>());

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  around QString [optional]
    * @param[in]  before QString [optional]
    * @param[in]  after QString [optional]
    * @param[in]  limit qint32 [optional]
    */
    virtual void listMessages(const QString &channel_id, const ::dc_rest::OptionalParam<QString> &around = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<QString> &before = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<QString> &after = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>());


    virtual void listMyConnections();

    /**
    * @param[in]  before QString [optional]
    * @param[in]  after QString [optional]
    * @param[in]  limit qint32 [optional]
    * @param[in]  with_counts bool [optional]
    */
    virtual void listMyGuilds(const ::dc_rest::OptionalParam<QString> &before = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<QString> &after = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>(), const ::dc_rest::OptionalParam<bool> &with_counts = ::dc_rest::OptionalParam<bool>());

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  before QString [optional]
    * @param[in]  limit qint32 [optional]
    */
    virtual void listMyPrivateArchivedThreads(const QString &channel_id, const ::dc_rest::OptionalParam<QString> &before = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>());

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  before QDateTime [optional]
    * @param[in]  limit qint32 [optional]
    */
    virtual void listPins(const QString &channel_id, const ::dc_rest::OptionalParam<QDateTime> &before = ::dc_rest::OptionalParam<QDateTime>(), const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>());

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  before QDateTime [optional]
    * @param[in]  limit qint32 [optional]
    */
    virtual void listPrivateArchivedThreads(const QString &channel_id, const ::dc_rest::OptionalParam<QDateTime> &before = ::dc_rest::OptionalParam<QDateTime>(), const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>());

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  before QDateTime [optional]
    * @param[in]  limit qint32 [optional]
    */
    virtual void listPublicArchivedThreads(const QString &channel_id, const ::dc_rest::OptionalParam<QDateTime> &before = ::dc_rest::OptionalParam<QDateTime>(), const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>());


    virtual void listStickerPacks();

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  with_member bool [optional]
    * @param[in]  limit qint32 [optional]
    * @param[in]  after QString [optional]
    */
    virtual void listThreadMembers(const QString &channel_id, const ::dc_rest::OptionalParam<bool> &with_member = ::dc_rest::OptionalParam<bool>(), const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>(), const ::dc_rest::OptionalParam<QString> &after = ::dc_rest::OptionalParam<QString>());


    virtual void listVoiceRegions();

    /**
    * @param[in]  oai_partner_sdk_unmerge_provisional_account_request OAIPartner_sdk_unmerge_provisional_account_request [required]
    */
    virtual void partnerSdkToken(const OAIPartner_sdk_unmerge_provisional_account_request &oai_partner_sdk_unmerge_provisional_account_request);

    /**
    * @param[in]  oai_partner_sdk_unmerge_provisional_account_request OAIPartner_sdk_unmerge_provisional_account_request [required]
    */
    virtual void partnerSdkUnmergeProvisionalAccount(const OAIPartner_sdk_unmerge_provisional_account_request &oai_partner_sdk_unmerge_provisional_account_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    */
    virtual void pollExpire(const QString &channel_id, const QString &message_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  days qint32 [optional]
    * @param[in]  include_roles OAIGet_entitlements_sku_ids_parameter [optional]
    */
    virtual void previewPruneGuild(const QString &guild_id, const ::dc_rest::OptionalParam<qint32> &days = ::dc_rest::OptionalParam<qint32>(), const ::dc_rest::OptionalParam<OAIGet_entitlements_sku_ids_parameter> &include_roles = ::dc_rest::OptionalParam<OAIGet_entitlements_sku_ids_parameter>());

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_prune_guild_request OAIPrune_guild_request [required]
    */
    virtual void pruneGuild(const QString &guild_id, const OAIPrune_guild_request &oai_prune_guild_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_update_guild_onboarding_request OAIUpdateGuildOnboardingRequest [required]
    */
    virtual void putGuildsOnboarding(const QString &guild_id, const OAIUpdateGuildOnboardingRequest &oai_update_guild_onboarding_request);

    /**
    * @param[in]  limit qint32 [required]
    * @param[in]  query QString [required]
    * @param[in]  guild_id QString [required]
    */
    virtual void searchGuildMembers(const qint32 &limit, const QString &query, const QString &guild_id);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  oai_soundboard_sound_send_request OAISoundboardSoundSendRequest [required]
    */
    virtual void sendSoundboardSound(const QString &channel_id, const OAISoundboardSoundSendRequest &oai_soundboard_sound_send_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  overwrite_id QString [required]
    * @param[in]  oai_set_channel_permission_overwrite_request OAISet_channel_permission_overwrite_request [required]
    */
    virtual void setChannelPermissionOverwrite(const QString &channel_id, const QString &overwrite_id, const OAISet_channel_permission_overwrite_request &oai_set_channel_permission_overwrite_request);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  guild_id QString [required]
    * @param[in]  command_id QString [required]
    * @param[in]  oai_set_guild_application_command_permissions_request OAISet_guild_application_command_permissions_request [required]
    */
    virtual void setGuildApplicationCommandPermissions(const QString &application_id, const QString &guild_id, const QString &command_id, const OAISet_guild_application_command_permissions_request &oai_set_guild_application_command_permissions_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_set_guild_mfa_level_request OAISet_guild_mfa_level_request [required]
    */
    virtual void setGuildMfaLevel(const QString &guild_id, const OAISet_guild_mfa_level_request &oai_set_guild_mfa_level_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  code QString [required]
    */
    virtual void syncGuildTemplate(const QString &guild_id, const QString &code);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  name QString [optional]
    * @param[in]  slop qint32 [optional]
    * @param[in]  min_id QString [optional]
    * @param[in]  max_id QString [optional]
    * @param[in]  tag OAIThread_search_tag_parameter [optional]
    * @param[in]  tag_setting QString [optional]
    * @param[in]  archived bool [optional]
    * @param[in]  sort_by QString [optional]
    * @param[in]  sort_order QString [optional]
    * @param[in]  limit qint32 [optional]
    * @param[in]  offset qint32 [optional]
    */
    virtual void threadSearch(const QString &channel_id, const ::dc_rest::OptionalParam<QString> &name = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<qint32> &slop = ::dc_rest::OptionalParam<qint32>(), const ::dc_rest::OptionalParam<QString> &min_id = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<QString> &max_id = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<OAIThread_search_tag_parameter> &tag = ::dc_rest::OptionalParam<OAIThread_search_tag_parameter>(), const ::dc_rest::OptionalParam<QString> &tag_setting = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<bool> &archived = ::dc_rest::OptionalParam<bool>(), const ::dc_rest::OptionalParam<QString> &sort_by = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<QString> &sort_order = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<qint32> &limit = ::dc_rest::OptionalParam<qint32>(), const ::dc_rest::OptionalParam<qint32> &offset = ::dc_rest::OptionalParam<qint32>());

    /**
    * @param[in]  channel_id QString [required]
    */
    virtual void triggerTypingIndicator(const QString &channel_id);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  user_id QString [required]
    */
    virtual void unbanUserFromGuild(const QString &guild_id, const QString &user_id);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  oai_application_form_partial OAIApplicationFormPartial [required]
    */
    virtual void updateApplication(const QString &application_id, const OAIApplicationFormPartial &oai_application_form_partial);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  command_id QString [required]
    * @param[in]  oai_application_command_patch_request_partial OAIApplicationCommandPatchRequestPartial [required]
    */
    virtual void updateApplicationCommand(const QString &application_id, const QString &command_id, const OAIApplicationCommandPatchRequestPartial &oai_application_command_patch_request_partial);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  emoji_id QString [required]
    * @param[in]  oai_update_application_emoji_request OAIUpdate_application_emoji_request [required]
    */
    virtual void updateApplicationEmoji(const QString &application_id, const QString &emoji_id, const OAIUpdate_application_emoji_request &oai_update_application_emoji_request);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  oai_application_role_connections_metadata_item_request QList<OAIApplicationRoleConnectionsMetadataItemRequest> [required]
    */
    virtual void updateApplicationRoleConnectionsMetadata(const QString &application_id, const QList<OAIApplicationRoleConnectionsMetadataItemRequest> &oai_application_role_connections_metadata_item_request);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  oai_update_application_user_role_connection_request OAIUpdateApplicationUserRoleConnectionRequest [required]
    */
    virtual void updateApplicationUserRoleConnection(const QString &application_id, const OAIUpdateApplicationUserRoleConnectionRequest &oai_update_application_user_role_connection_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  rule_id QString [required]
    * @param[in]  oai_update_auto_moderation_rule_request OAIUpdate_auto_moderation_rule_request [required]
    */
    virtual void updateAutoModerationRule(const QString &guild_id, const QString &rule_id, const OAIUpdate_auto_moderation_rule_request &oai_update_auto_moderation_rule_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  oai_update_channel_request OAIUpdate_channel_request [required]
    */
    virtual void updateChannel(const QString &channel_id, const OAIUpdate_channel_request &oai_update_channel_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_guild_patch_request_partial OAIGuildPatchRequestPartial [required]
    */
    virtual void updateGuild(const QString &guild_id, const OAIGuildPatchRequestPartial &oai_guild_patch_request_partial);

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  guild_id QString [required]
    * @param[in]  command_id QString [required]
    * @param[in]  oai_application_command_patch_request_partial OAIApplicationCommandPatchRequestPartial [required]
    */
    virtual void updateGuildApplicationCommand(const QString &application_id, const QString &guild_id, const QString &command_id, const OAIApplicationCommandPatchRequestPartial &oai_application_command_patch_request_partial);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  emoji_id QString [required]
    * @param[in]  oai_update_guild_emoji_request OAIUpdate_guild_emoji_request [required]
    */
    virtual void updateGuildEmoji(const QString &guild_id, const QString &emoji_id, const OAIUpdate_guild_emoji_request &oai_update_guild_emoji_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  user_id QString [required]
    * @param[in]  oai_update_guild_member_request OAIUpdate_guild_member_request [required]
    */
    virtual void updateGuildMember(const QString &guild_id, const QString &user_id, const OAIUpdate_guild_member_request &oai_update_guild_member_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  role_id QString [required]
    * @param[in]  oai_create_guild_role_request OAICreate_guild_role_request [required]
    */
    virtual void updateGuildRole(const QString &guild_id, const QString &role_id, const OAICreate_guild_role_request &oai_create_guild_role_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  guild_scheduled_event_id QString [required]
    * @param[in]  oai_update_guild_scheduled_event_request OAIUpdate_guild_scheduled_event_request [required]
    */
    virtual void updateGuildScheduledEvent(const QString &guild_id, const QString &guild_scheduled_event_id, const OAIUpdate_guild_scheduled_event_request &oai_update_guild_scheduled_event_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  sound_id QString [required]
    * @param[in]  oai_soundboard_patch_request_partial OAISoundboardPatchRequestPartial [required]
    */
    virtual void updateGuildSoundboardSound(const QString &guild_id, const QString &sound_id, const OAISoundboardPatchRequestPartial &oai_soundboard_patch_request_partial);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  sticker_id QString [required]
    * @param[in]  oai_update_guild_sticker_request OAIUpdate_guild_sticker_request [required]
    */
    virtual void updateGuildSticker(const QString &guild_id, const QString &sticker_id, const OAIUpdate_guild_sticker_request &oai_update_guild_sticker_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  code QString [required]
    * @param[in]  oai_update_guild_template_request OAIUpdate_guild_template_request [required]
    */
    virtual void updateGuildTemplate(const QString &guild_id, const QString &code, const OAIUpdate_guild_template_request &oai_update_guild_template_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_welcome_screen_patch_request_partial OAIWelcomeScreenPatchRequestPartial [required]
    */
    virtual void updateGuildWelcomeScreen(const QString &guild_id, const OAIWelcomeScreenPatchRequestPartial &oai_welcome_screen_patch_request_partial);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_update_guild_widget_settings_request OAIUpdate_guild_widget_settings_request [required]
    */
    virtual void updateGuildWidgetSettings(const QString &guild_id, const OAIUpdate_guild_widget_settings_request &oai_update_guild_widget_settings_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  message_id QString [required]
    * @param[in]  oai_message_edit_request_partial OAIMessageEditRequestPartial [required]
    */
    virtual void updateMessage(const QString &channel_id, const QString &message_id, const OAIMessageEditRequestPartial &oai_message_edit_request_partial);

    /**
    * @param[in]  oai_application_form_partial OAIApplicationFormPartial [required]
    */
    virtual void updateMyApplication(const OAIApplicationFormPartial &oai_application_form_partial);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_update_my_guild_member_request OAIUpdate_my_guild_member_request [required]
    */
    virtual void updateMyGuildMember(const QString &guild_id, const OAIUpdate_my_guild_member_request &oai_update_my_guild_member_request);

    /**
    * @param[in]  oai_bot_account_patch_request OAIBotAccountPatchRequest [required]
    */
    virtual void updateMyUser(const OAIBotAccountPatchRequest &oai_bot_account_patch_request);

    /**
    * @param[in]  webhook_id QString [required]
    * @param[in]  webhook_token QString [required]
    * @param[in]  oai_incoming_webhook_update_request_partial OAIIncomingWebhookUpdateRequestPartial [required]
    * @param[in]  thread_id QString [optional]
    * @param[in]  with_components bool [optional]
    */
    virtual void updateOriginalWebhookMessage(const QString &webhook_id, const QString &webhook_token, const OAIIncomingWebhookUpdateRequestPartial &oai_incoming_webhook_update_request_partial, const ::dc_rest::OptionalParam<QString> &thread_id = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<bool> &with_components = ::dc_rest::OptionalParam<bool>());

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  oai_update_self_voice_state_request OAIUpdate_self_voice_state_request [required]
    */
    virtual void updateSelfVoiceState(const QString &guild_id, const OAIUpdate_self_voice_state_request &oai_update_self_voice_state_request);

    /**
    * @param[in]  channel_id QString [required]
    * @param[in]  oai_update_stage_instance_request OAIUpdate_stage_instance_request [required]
    */
    virtual void updateStageInstance(const QString &channel_id, const OAIUpdate_stage_instance_request &oai_update_stage_instance_request);

    /**
    * @param[in]  guild_id QString [required]
    * @param[in]  user_id QString [required]
    * @param[in]  oai_update_voice_state_request OAIUpdate_voice_state_request [required]
    */
    virtual void updateVoiceState(const QString &guild_id, const QString &user_id, const OAIUpdate_voice_state_request &oai_update_voice_state_request);

    /**
    * @param[in]  webhook_id QString [required]
    * @param[in]  oai_update_webhook_request OAIUpdate_webhook_request [required]
    */
    virtual void updateWebhook(const QString &webhook_id, const OAIUpdate_webhook_request &oai_update_webhook_request);

    /**
    * @param[in]  webhook_id QString [required]
    * @param[in]  webhook_token QString [required]
    * @param[in]  oai_update_webhook_by_token_request OAIUpdate_webhook_by_token_request [required]
    */
    virtual void updateWebhookByToken(const QString &webhook_id, const QString &webhook_token, const OAIUpdate_webhook_by_token_request &oai_update_webhook_by_token_request);

    /**
    * @param[in]  webhook_id QString [required]
    * @param[in]  webhook_token QString [required]
    * @param[in]  message_id QString [required]
    * @param[in]  oai_incoming_webhook_update_request_partial OAIIncomingWebhookUpdateRequestPartial [required]
    * @param[in]  thread_id QString [optional]
    * @param[in]  with_components bool [optional]
    */
    virtual void updateWebhookMessage(const QString &webhook_id, const QString &webhook_token, const QString &message_id, const OAIIncomingWebhookUpdateRequestPartial &oai_incoming_webhook_update_request_partial, const ::dc_rest::OptionalParam<QString> &thread_id = ::dc_rest::OptionalParam<QString>(), const ::dc_rest::OptionalParam<bool> &with_components = ::dc_rest::OptionalParam<bool>());

    /**
    * @param[in]  application_id QString [required]
    * @param[in]  file QString [required]
    */
    virtual void uploadApplicationAttachment(const QString &application_id, const QString &file);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void addGroupDmUserCallback(OAIHttpRequestWorker *worker);
    void addGuildMemberCallback(OAIHttpRequestWorker *worker);
    void addGuildMemberRoleCallback(OAIHttpRequestWorker *worker);
    void addLobbyMemberCallback(OAIHttpRequestWorker *worker);
    void addMyMessageReactionCallback(OAIHttpRequestWorker *worker);
    void addThreadMemberCallback(OAIHttpRequestWorker *worker);
    void applicationsGetActivityInstanceCallback(OAIHttpRequestWorker *worker);
    void banUserFromGuildCallback(OAIHttpRequestWorker *worker);
    void bulkBanUsersFromGuildCallback(OAIHttpRequestWorker *worker);
    void bulkDeleteMessagesCallback(OAIHttpRequestWorker *worker);
    void bulkSetApplicationCommandsCallback(OAIHttpRequestWorker *worker);
    void bulkSetGuildApplicationCommandsCallback(OAIHttpRequestWorker *worker);
    void bulkUpdateGuildChannelsCallback(OAIHttpRequestWorker *worker);
    void bulkUpdateGuildRolesCallback(OAIHttpRequestWorker *worker);
    void bulkUpdateLobbyMembersCallback(OAIHttpRequestWorker *worker);
    void consumeEntitlementCallback(OAIHttpRequestWorker *worker);
    void createApplicationCommandCallback(OAIHttpRequestWorker *worker);
    void createApplicationEmojiCallback(OAIHttpRequestWorker *worker);
    void createAutoModerationRuleCallback(OAIHttpRequestWorker *worker);
    void createChannelInviteCallback(OAIHttpRequestWorker *worker);
    void createDmCallback(OAIHttpRequestWorker *worker);
    void createEntitlementCallback(OAIHttpRequestWorker *worker);
    void createGuildCallback(OAIHttpRequestWorker *worker);
    void createGuildApplicationCommandCallback(OAIHttpRequestWorker *worker);
    void createGuildChannelCallback(OAIHttpRequestWorker *worker);
    void createGuildEmojiCallback(OAIHttpRequestWorker *worker);
    void createGuildFromTemplateCallback(OAIHttpRequestWorker *worker);
    void createGuildRoleCallback(OAIHttpRequestWorker *worker);
    void createGuildScheduledEventCallback(OAIHttpRequestWorker *worker);
    void createGuildSoundboardSoundCallback(OAIHttpRequestWorker *worker);
    void createGuildStickerCallback(OAIHttpRequestWorker *worker);
    void createGuildTemplateCallback(OAIHttpRequestWorker *worker);
    void createInteractionResponseCallback(OAIHttpRequestWorker *worker);
    void createLobbyCallback(OAIHttpRequestWorker *worker);
    void createLobbyMessageCallback(OAIHttpRequestWorker *worker);
    void createMessageCallback(OAIHttpRequestWorker *worker);
    void createOrJoinLobbyCallback(OAIHttpRequestWorker *worker);
    void createPinCallback(OAIHttpRequestWorker *worker);
    void createStageInstanceCallback(OAIHttpRequestWorker *worker);
    void createThreadCallback(OAIHttpRequestWorker *worker);
    void createThreadFromMessageCallback(OAIHttpRequestWorker *worker);
    void createWebhookCallback(OAIHttpRequestWorker *worker);
    void crosspostMessageCallback(OAIHttpRequestWorker *worker);
    void deleteAllMessageReactionsCallback(OAIHttpRequestWorker *worker);
    void deleteAllMessageReactionsByEmojiCallback(OAIHttpRequestWorker *worker);
    void deleteApplicationCommandCallback(OAIHttpRequestWorker *worker);
    void deleteApplicationEmojiCallback(OAIHttpRequestWorker *worker);
    void deleteApplicationUserRoleConnectionCallback(OAIHttpRequestWorker *worker);
    void deleteAutoModerationRuleCallback(OAIHttpRequestWorker *worker);
    void deleteChannelCallback(OAIHttpRequestWorker *worker);
    void deleteChannelPermissionOverwriteCallback(OAIHttpRequestWorker *worker);
    void deleteEntitlementCallback(OAIHttpRequestWorker *worker);
    void deleteGroupDmUserCallback(OAIHttpRequestWorker *worker);
    void deleteGuildCallback(OAIHttpRequestWorker *worker);
    void deleteGuildApplicationCommandCallback(OAIHttpRequestWorker *worker);
    void deleteGuildEmojiCallback(OAIHttpRequestWorker *worker);
    void deleteGuildIntegrationCallback(OAIHttpRequestWorker *worker);
    void deleteGuildMemberCallback(OAIHttpRequestWorker *worker);
    void deleteGuildMemberRoleCallback(OAIHttpRequestWorker *worker);
    void deleteGuildRoleCallback(OAIHttpRequestWorker *worker);
    void deleteGuildScheduledEventCallback(OAIHttpRequestWorker *worker);
    void deleteGuildSoundboardSoundCallback(OAIHttpRequestWorker *worker);
    void deleteGuildStickerCallback(OAIHttpRequestWorker *worker);
    void deleteGuildTemplateCallback(OAIHttpRequestWorker *worker);
    void deleteLobbyMemberCallback(OAIHttpRequestWorker *worker);
    void deleteMessageCallback(OAIHttpRequestWorker *worker);
    void deleteMyMessageReactionCallback(OAIHttpRequestWorker *worker);
    void deleteOriginalWebhookMessageCallback(OAIHttpRequestWorker *worker);
    void deletePinCallback(OAIHttpRequestWorker *worker);
    void deleteStageInstanceCallback(OAIHttpRequestWorker *worker);
    void deleteThreadMemberCallback(OAIHttpRequestWorker *worker);
    void deleteUserMessageReactionCallback(OAIHttpRequestWorker *worker);
    void deleteWebhookCallback(OAIHttpRequestWorker *worker);
    void deleteWebhookByTokenCallback(OAIHttpRequestWorker *worker);
    void deleteWebhookMessageCallback(OAIHttpRequestWorker *worker);
    void deprecatedCreatePinCallback(OAIHttpRequestWorker *worker);
    void deprecatedDeletePinCallback(OAIHttpRequestWorker *worker);
    void deprecatedListPinsCallback(OAIHttpRequestWorker *worker);
    void editLobbyCallback(OAIHttpRequestWorker *worker);
    void editLobbyChannelLinkCallback(OAIHttpRequestWorker *worker);
    void executeGithubCompatibleWebhookCallback(OAIHttpRequestWorker *worker);
    void executeSlackCompatibleWebhookCallback(OAIHttpRequestWorker *worker);
    void executeWebhookCallback(OAIHttpRequestWorker *worker);
    void followChannelCallback(OAIHttpRequestWorker *worker);
    void getActiveGuildThreadsCallback(OAIHttpRequestWorker *worker);
    void getAnswerVotersCallback(OAIHttpRequestWorker *worker);
    void getApplicationCallback(OAIHttpRequestWorker *worker);
    void getApplicationCommandCallback(OAIHttpRequestWorker *worker);
    void getApplicationEmojiCallback(OAIHttpRequestWorker *worker);
    void getApplicationRoleConnectionsMetadataCallback(OAIHttpRequestWorker *worker);
    void getApplicationUserRoleConnectionCallback(OAIHttpRequestWorker *worker);
    void getAutoModerationRuleCallback(OAIHttpRequestWorker *worker);
    void getBotGatewayCallback(OAIHttpRequestWorker *worker);
    void getChannelCallback(OAIHttpRequestWorker *worker);
    void getEntitlementCallback(OAIHttpRequestWorker *worker);
    void getEntitlementsCallback(OAIHttpRequestWorker *worker);
    void getGatewayCallback(OAIHttpRequestWorker *worker);
    void getGuildCallback(OAIHttpRequestWorker *worker);
    void getGuildApplicationCommandCallback(OAIHttpRequestWorker *worker);
    void getGuildApplicationCommandPermissionsCallback(OAIHttpRequestWorker *worker);
    void getGuildBanCallback(OAIHttpRequestWorker *worker);
    void getGuildEmojiCallback(OAIHttpRequestWorker *worker);
    void getGuildMemberCallback(OAIHttpRequestWorker *worker);
    void getGuildNewMemberWelcomeCallback(OAIHttpRequestWorker *worker);
    void getGuildPreviewCallback(OAIHttpRequestWorker *worker);
    void getGuildRoleCallback(OAIHttpRequestWorker *worker);
    void getGuildScheduledEventCallback(OAIHttpRequestWorker *worker);
    void getGuildSoundboardSoundCallback(OAIHttpRequestWorker *worker);
    void getGuildStickerCallback(OAIHttpRequestWorker *worker);
    void getGuildTemplateCallback(OAIHttpRequestWorker *worker);
    void getGuildVanityUrlCallback(OAIHttpRequestWorker *worker);
    void getGuildWebhooksCallback(OAIHttpRequestWorker *worker);
    void getGuildWelcomeScreenCallback(OAIHttpRequestWorker *worker);
    void getGuildWidgetCallback(OAIHttpRequestWorker *worker);
    void getGuildWidgetPngCallback(OAIHttpRequestWorker *worker);
    void getGuildWidgetSettingsCallback(OAIHttpRequestWorker *worker);
    void getGuildsOnboardingCallback(OAIHttpRequestWorker *worker);
    void getLobbyCallback(OAIHttpRequestWorker *worker);
    void getLobbyMessagesCallback(OAIHttpRequestWorker *worker);
    void getMessageCallback(OAIHttpRequestWorker *worker);
    void getMyApplicationCallback(OAIHttpRequestWorker *worker);
    void getMyGuildMemberCallback(OAIHttpRequestWorker *worker);
    void getMyOauth2ApplicationCallback(OAIHttpRequestWorker *worker);
    void getMyOauth2AuthorizationCallback(OAIHttpRequestWorker *worker);
    void getMyUserCallback(OAIHttpRequestWorker *worker);
    void getOpenidConnectUserinfoCallback(OAIHttpRequestWorker *worker);
    void getOriginalWebhookMessageCallback(OAIHttpRequestWorker *worker);
    void getPublicKeysCallback(OAIHttpRequestWorker *worker);
    void getSelfVoiceStateCallback(OAIHttpRequestWorker *worker);
    void getSoundboardDefaultSoundsCallback(OAIHttpRequestWorker *worker);
    void getStageInstanceCallback(OAIHttpRequestWorker *worker);
    void getStickerCallback(OAIHttpRequestWorker *worker);
    void getStickerPackCallback(OAIHttpRequestWorker *worker);
    void getThreadMemberCallback(OAIHttpRequestWorker *worker);
    void getUserCallback(OAIHttpRequestWorker *worker);
    void getVoiceStateCallback(OAIHttpRequestWorker *worker);
    void getWebhookCallback(OAIHttpRequestWorker *worker);
    void getWebhookByTokenCallback(OAIHttpRequestWorker *worker);
    void getWebhookMessageCallback(OAIHttpRequestWorker *worker);
    void inviteResolveCallback(OAIHttpRequestWorker *worker);
    void inviteRevokeCallback(OAIHttpRequestWorker *worker);
    void joinThreadCallback(OAIHttpRequestWorker *worker);
    void leaveGuildCallback(OAIHttpRequestWorker *worker);
    void leaveLobbyCallback(OAIHttpRequestWorker *worker);
    void leaveThreadCallback(OAIHttpRequestWorker *worker);
    void listApplicationCommandsCallback(OAIHttpRequestWorker *worker);
    void listApplicationEmojisCallback(OAIHttpRequestWorker *worker);
    void listAutoModerationRulesCallback(OAIHttpRequestWorker *worker);
    void listChannelInvitesCallback(OAIHttpRequestWorker *worker);
    void listChannelWebhooksCallback(OAIHttpRequestWorker *worker);
    void listGuildApplicationCommandPermissionsCallback(OAIHttpRequestWorker *worker);
    void listGuildApplicationCommandsCallback(OAIHttpRequestWorker *worker);
    void listGuildAuditLogEntriesCallback(OAIHttpRequestWorker *worker);
    void listGuildBansCallback(OAIHttpRequestWorker *worker);
    void listGuildChannelsCallback(OAIHttpRequestWorker *worker);
    void listGuildEmojisCallback(OAIHttpRequestWorker *worker);
    void listGuildIntegrationsCallback(OAIHttpRequestWorker *worker);
    void listGuildInvitesCallback(OAIHttpRequestWorker *worker);
    void listGuildMembersCallback(OAIHttpRequestWorker *worker);
    void listGuildRolesCallback(OAIHttpRequestWorker *worker);
    void listGuildScheduledEventUsersCallback(OAIHttpRequestWorker *worker);
    void listGuildScheduledEventsCallback(OAIHttpRequestWorker *worker);
    void listGuildSoundboardSoundsCallback(OAIHttpRequestWorker *worker);
    void listGuildStickersCallback(OAIHttpRequestWorker *worker);
    void listGuildTemplatesCallback(OAIHttpRequestWorker *worker);
    void listGuildVoiceRegionsCallback(OAIHttpRequestWorker *worker);
    void listMessageReactionsByEmojiCallback(OAIHttpRequestWorker *worker);
    void listMessagesCallback(OAIHttpRequestWorker *worker);
    void listMyConnectionsCallback(OAIHttpRequestWorker *worker);
    void listMyGuildsCallback(OAIHttpRequestWorker *worker);
    void listMyPrivateArchivedThreadsCallback(OAIHttpRequestWorker *worker);
    void listPinsCallback(OAIHttpRequestWorker *worker);
    void listPrivateArchivedThreadsCallback(OAIHttpRequestWorker *worker);
    void listPublicArchivedThreadsCallback(OAIHttpRequestWorker *worker);
    void listStickerPacksCallback(OAIHttpRequestWorker *worker);
    void listThreadMembersCallback(OAIHttpRequestWorker *worker);
    void listVoiceRegionsCallback(OAIHttpRequestWorker *worker);
    void partnerSdkTokenCallback(OAIHttpRequestWorker *worker);
    void partnerSdkUnmergeProvisionalAccountCallback(OAIHttpRequestWorker *worker);
    void pollExpireCallback(OAIHttpRequestWorker *worker);
    void previewPruneGuildCallback(OAIHttpRequestWorker *worker);
    void pruneGuildCallback(OAIHttpRequestWorker *worker);
    void putGuildsOnboardingCallback(OAIHttpRequestWorker *worker);
    void searchGuildMembersCallback(OAIHttpRequestWorker *worker);
    void sendSoundboardSoundCallback(OAIHttpRequestWorker *worker);
    void setChannelPermissionOverwriteCallback(OAIHttpRequestWorker *worker);
    void setGuildApplicationCommandPermissionsCallback(OAIHttpRequestWorker *worker);
    void setGuildMfaLevelCallback(OAIHttpRequestWorker *worker);
    void syncGuildTemplateCallback(OAIHttpRequestWorker *worker);
    void threadSearchCallback(OAIHttpRequestWorker *worker);
    void triggerTypingIndicatorCallback(OAIHttpRequestWorker *worker);
    void unbanUserFromGuildCallback(OAIHttpRequestWorker *worker);
    void updateApplicationCallback(OAIHttpRequestWorker *worker);
    void updateApplicationCommandCallback(OAIHttpRequestWorker *worker);
    void updateApplicationEmojiCallback(OAIHttpRequestWorker *worker);
    void updateApplicationRoleConnectionsMetadataCallback(OAIHttpRequestWorker *worker);
    void updateApplicationUserRoleConnectionCallback(OAIHttpRequestWorker *worker);
    void updateAutoModerationRuleCallback(OAIHttpRequestWorker *worker);
    void updateChannelCallback(OAIHttpRequestWorker *worker);
    void updateGuildCallback(OAIHttpRequestWorker *worker);
    void updateGuildApplicationCommandCallback(OAIHttpRequestWorker *worker);
    void updateGuildEmojiCallback(OAIHttpRequestWorker *worker);
    void updateGuildMemberCallback(OAIHttpRequestWorker *worker);
    void updateGuildRoleCallback(OAIHttpRequestWorker *worker);
    void updateGuildScheduledEventCallback(OAIHttpRequestWorker *worker);
    void updateGuildSoundboardSoundCallback(OAIHttpRequestWorker *worker);
    void updateGuildStickerCallback(OAIHttpRequestWorker *worker);
    void updateGuildTemplateCallback(OAIHttpRequestWorker *worker);
    void updateGuildWelcomeScreenCallback(OAIHttpRequestWorker *worker);
    void updateGuildWidgetSettingsCallback(OAIHttpRequestWorker *worker);
    void updateMessageCallback(OAIHttpRequestWorker *worker);
    void updateMyApplicationCallback(OAIHttpRequestWorker *worker);
    void updateMyGuildMemberCallback(OAIHttpRequestWorker *worker);
    void updateMyUserCallback(OAIHttpRequestWorker *worker);
    void updateOriginalWebhookMessageCallback(OAIHttpRequestWorker *worker);
    void updateSelfVoiceStateCallback(OAIHttpRequestWorker *worker);
    void updateStageInstanceCallback(OAIHttpRequestWorker *worker);
    void updateVoiceStateCallback(OAIHttpRequestWorker *worker);
    void updateWebhookCallback(OAIHttpRequestWorker *worker);
    void updateWebhookByTokenCallback(OAIHttpRequestWorker *worker);
    void updateWebhookMessageCallback(OAIHttpRequestWorker *worker);
    void uploadApplicationAttachmentCallback(OAIHttpRequestWorker *worker);

Q_SIGNALS:

    void addGroupDmUserSignal(OAIAdd_group_dm_user_201_response summary);
    void addGuildMemberSignal(OAIGuildMemberResponse summary);
    void addGuildMemberRoleSignal();
    void addLobbyMemberSignal(OAILobbyMemberResponse summary);
    void addMyMessageReactionSignal();
    void addThreadMemberSignal();
    void applicationsGetActivityInstanceSignal(OAIEmbeddedActivityInstance summary);
    void banUserFromGuildSignal();
    void bulkBanUsersFromGuildSignal(OAIBulkBanUsersResponse summary);
    void bulkDeleteMessagesSignal();
    void bulkSetApplicationCommandsSignal(QList<OAIApplicationCommandResponse> summary);
    void bulkSetGuildApplicationCommandsSignal(QList<OAIApplicationCommandResponse> summary);
    void bulkUpdateGuildChannelsSignal();
    void bulkUpdateGuildRolesSignal(QList<OAIGuildRoleResponse> summary);
    void bulkUpdateLobbyMembersSignal(QList<OAILobbyMemberResponse> summary);
    void consumeEntitlementSignal();
    void createApplicationCommandSignal(OAIApplicationCommandResponse summary);
    void createApplicationEmojiSignal(OAIEmojiResponse summary);
    void createAutoModerationRuleSignal(OAICreate_auto_moderation_rule_200_response summary);
    void createChannelInviteSignal(OAIList_channel_invites_200_response_inner summary);
    void createDmSignal(OAIAdd_group_dm_user_201_response summary);
    void createEntitlementSignal(OAIEntitlementResponse summary);
    void createGuildSignal(OAIGuildResponse summary);
    void createGuildApplicationCommandSignal(OAIApplicationCommandResponse summary);
    void createGuildChannelSignal(OAIGuildChannelResponse summary);
    void createGuildEmojiSignal(OAIEmojiResponse summary);
    void createGuildFromTemplateSignal(OAIGuildResponse summary);
    void createGuildRoleSignal(OAIGuildRoleResponse summary);
    void createGuildScheduledEventSignal(OAIList_guild_scheduled_events_200_response_inner summary);
    void createGuildSoundboardSoundSignal(OAISoundboardSoundResponse summary);
    void createGuildStickerSignal(OAIGuildStickerResponse summary);
    void createGuildTemplateSignal(OAIGuildTemplateResponse summary);
    void createInteractionResponseSignal(OAIInteractionCallbackResponse summary);
    void createLobbySignal(OAILobbyResponse summary);
    void createLobbyMessageSignal(OAILobbyMessageResponse summary);
    void createMessageSignal(OAIMessageResponse summary);
    void createOrJoinLobbySignal(OAILobbyResponse summary);
    void createPinSignal();
    void createStageInstanceSignal(OAIStageInstanceResponse summary);
    void createThreadSignal(OAICreatedThreadResponse summary);
    void createThreadFromMessageSignal(OAIThreadResponse summary);
    void createWebhookSignal(OAIGuildIncomingWebhookResponse summary);
    void crosspostMessageSignal(OAIMessageResponse summary);
    void deleteAllMessageReactionsSignal();
    void deleteAllMessageReactionsByEmojiSignal();
    void deleteApplicationCommandSignal();
    void deleteApplicationEmojiSignal();
    void deleteApplicationUserRoleConnectionSignal();
    void deleteAutoModerationRuleSignal();
    void deleteChannelSignal(OAIGet_channel_200_response summary);
    void deleteChannelPermissionOverwriteSignal();
    void deleteEntitlementSignal();
    void deleteGroupDmUserSignal();
    void deleteGuildSignal();
    void deleteGuildApplicationCommandSignal();
    void deleteGuildEmojiSignal();
    void deleteGuildIntegrationSignal();
    void deleteGuildMemberSignal();
    void deleteGuildMemberRoleSignal();
    void deleteGuildRoleSignal();
    void deleteGuildScheduledEventSignal();
    void deleteGuildSoundboardSoundSignal();
    void deleteGuildStickerSignal();
    void deleteGuildTemplateSignal(OAIGuildTemplateResponse summary);
    void deleteLobbyMemberSignal();
    void deleteMessageSignal();
    void deleteMyMessageReactionSignal();
    void deleteOriginalWebhookMessageSignal();
    void deletePinSignal();
    void deleteStageInstanceSignal();
    void deleteThreadMemberSignal();
    void deleteUserMessageReactionSignal();
    void deleteWebhookSignal();
    void deleteWebhookByTokenSignal();
    void deleteWebhookMessageSignal();
    void deprecatedCreatePinSignal();
    void deprecatedDeletePinSignal();
    void deprecatedListPinsSignal(QList<OAIMessageResponse> summary);
    void editLobbySignal(OAILobbyResponse summary);
    void editLobbyChannelLinkSignal(OAILobbyResponse summary);
    void executeGithubCompatibleWebhookSignal();
    void executeSlackCompatibleWebhookSignal(QString summary);
    void executeWebhookSignal(OAIMessageResponse summary);
    void followChannelSignal(OAIChannelFollowerResponse summary);
    void getActiveGuildThreadsSignal(OAIThreadsResponse summary);
    void getAnswerVotersSignal(OAIPollAnswerDetailsResponse summary);
    void getApplicationSignal(OAIPrivateApplicationResponse summary);
    void getApplicationCommandSignal(OAIApplicationCommandResponse summary);
    void getApplicationEmojiSignal(OAIEmojiResponse summary);
    void getApplicationRoleConnectionsMetadataSignal(QList<OAIApplicationRoleConnectionsMetadataItemResponse> summary);
    void getApplicationUserRoleConnectionSignal(OAIApplicationUserRoleConnectionResponse summary);
    void getAutoModerationRuleSignal(OAICreate_auto_moderation_rule_200_response summary);
    void getBotGatewaySignal(OAIGatewayBotResponse summary);
    void getChannelSignal(OAIGet_channel_200_response summary);
    void getEntitlementSignal(OAIEntitlementResponse summary);
    void getEntitlementsSignal(QList<OAIEntitlementResponse> summary);
    void getGatewaySignal(OAIGatewayResponse summary);
    void getGuildSignal(OAIGuildWithCountsResponse summary);
    void getGuildApplicationCommandSignal(OAIApplicationCommandResponse summary);
    void getGuildApplicationCommandPermissionsSignal(OAICommandPermissionsResponse summary);
    void getGuildBanSignal(OAIGuildBanResponse summary);
    void getGuildEmojiSignal(OAIEmojiResponse summary);
    void getGuildMemberSignal(OAIGuildMemberResponse summary);
    void getGuildNewMemberWelcomeSignal(OAIGuildHomeSettingsResponse summary);
    void getGuildPreviewSignal(OAIGuildPreviewResponse summary);
    void getGuildRoleSignal(OAIGuildRoleResponse summary);
    void getGuildScheduledEventSignal(OAIList_guild_scheduled_events_200_response_inner summary);
    void getGuildSoundboardSoundSignal(OAISoundboardSoundResponse summary);
    void getGuildStickerSignal(OAIGuildStickerResponse summary);
    void getGuildTemplateSignal(OAIGuildTemplateResponse summary);
    void getGuildVanityUrlSignal(OAIVanityURLResponse summary);
    void getGuildWebhooksSignal(QList<OAIList_channel_webhooks_200_response_inner> summary);
    void getGuildWelcomeScreenSignal(OAIGuildWelcomeScreenResponse summary);
    void getGuildWidgetSignal(OAIWidgetResponse summary);
    void getGuildWidgetPngSignal(QString summary);
    void getGuildWidgetSettingsSignal(OAIWidgetSettingsResponse summary);
    void getGuildsOnboardingSignal(OAIUserGuildOnboardingResponse summary);
    void getLobbySignal(OAILobbyResponse summary);
    void getLobbyMessagesSignal(QList<OAILobbyMessageResponse> summary);
    void getMessageSignal(OAIMessageResponse summary);
    void getMyApplicationSignal(OAIPrivateApplicationResponse summary);
    void getMyGuildMemberSignal(OAIPrivateGuildMemberResponse summary);
    void getMyOauth2ApplicationSignal(OAIPrivateApplicationResponse summary);
    void getMyOauth2AuthorizationSignal(OAIOAuth2GetAuthorizationResponse summary);
    void getMyUserSignal(OAIUserPIIResponse summary);
    void getOpenidConnectUserinfoSignal(OAIOAuth2GetOpenIDConnectUserInfoResponse summary);
    void getOriginalWebhookMessageSignal(OAIMessageResponse summary);
    void getPublicKeysSignal(OAIOAuth2GetKeys summary);
    void getSelfVoiceStateSignal(OAIVoiceStateResponse summary);
    void getSoundboardDefaultSoundsSignal(QList<OAISoundboardSoundResponse> summary);
    void getStageInstanceSignal(OAIStageInstanceResponse summary);
    void getStickerSignal(OAIGet_sticker_200_response summary);
    void getStickerPackSignal(OAIStickerPackResponse summary);
    void getThreadMemberSignal(OAIThreadMemberResponse summary);
    void getUserSignal(OAIUserResponse summary);
    void getVoiceStateSignal(OAIVoiceStateResponse summary);
    void getWebhookSignal(OAIList_channel_webhooks_200_response_inner summary);
    void getWebhookByTokenSignal(OAIList_channel_webhooks_200_response_inner summary);
    void getWebhookMessageSignal(OAIMessageResponse summary);
    void inviteResolveSignal(OAIList_channel_invites_200_response_inner summary);
    void inviteRevokeSignal(OAIList_channel_invites_200_response_inner summary);
    void joinThreadSignal();
    void leaveGuildSignal();
    void leaveLobbySignal();
    void leaveThreadSignal();
    void listApplicationCommandsSignal(QList<OAIApplicationCommandResponse> summary);
    void listApplicationEmojisSignal(OAIListApplicationEmojisResponse summary);
    void listAutoModerationRulesSignal(QList<OAIList_auto_moderation_rules_200_response_inner> summary);
    void listChannelInvitesSignal(QList<OAIList_channel_invites_200_response_inner> summary);
    void listChannelWebhooksSignal(QList<OAIList_channel_webhooks_200_response_inner> summary);
    void listGuildApplicationCommandPermissionsSignal(QList<OAICommandPermissionsResponse> summary);
    void listGuildApplicationCommandsSignal(QList<OAIApplicationCommandResponse> summary);
    void listGuildAuditLogEntriesSignal(OAIGuildAuditLogResponse summary);
    void listGuildBansSignal(QList<OAIGuildBanResponse> summary);
    void listGuildChannelsSignal(QList<OAIGet_channel_200_response> summary);
    void listGuildEmojisSignal(QList<OAIEmojiResponse> summary);
    void listGuildIntegrationsSignal(QList<OAIList_guild_integrations_200_response_inner> summary);
    void listGuildInvitesSignal(QList<OAIList_channel_invites_200_response_inner> summary);
    void listGuildMembersSignal(QList<OAIGuildMemberResponse> summary);
    void listGuildRolesSignal(QList<OAIGuildRoleResponse> summary);
    void listGuildScheduledEventUsersSignal(QList<OAIScheduledEventUserResponse> summary);
    void listGuildScheduledEventsSignal(QList<OAIList_guild_scheduled_events_200_response_inner> summary);
    void listGuildSoundboardSoundsSignal(OAIListGuildSoundboardSoundsResponse summary);
    void listGuildStickersSignal(QList<OAIGuildStickerResponse> summary);
    void listGuildTemplatesSignal(QList<OAIGuildTemplateResponse> summary);
    void listGuildVoiceRegionsSignal(QList<OAIVoiceRegionResponse> summary);
    void listMessageReactionsByEmojiSignal(QList<OAIUserResponse> summary);
    void listMessagesSignal(QList<OAIMessageResponse> summary);
    void listMyConnectionsSignal(QList<OAIConnectedAccountResponse> summary);
    void listMyGuildsSignal(QList<OAIMyGuildResponse> summary);
    void listMyPrivateArchivedThreadsSignal(OAIThreadsResponse summary);
    void listPinsSignal(OAIPinnedMessagesResponse summary);
    void listPrivateArchivedThreadsSignal(OAIThreadsResponse summary);
    void listPublicArchivedThreadsSignal(OAIThreadsResponse summary);
    void listStickerPacksSignal(OAIStickerPackCollectionResponse summary);
    void listThreadMembersSignal(QList<OAIThreadMemberResponse> summary);
    void listVoiceRegionsSignal(QList<OAIVoiceRegionResponse> summary);
    void partnerSdkTokenSignal(OAIProvisionalTokenResponse summary);
    void partnerSdkUnmergeProvisionalAccountSignal();
    void pollExpireSignal(OAIMessageResponse summary);
    void previewPruneGuildSignal(OAIGuildPruneResponse summary);
    void pruneGuildSignal(OAIGuildPruneResponse summary);
    void putGuildsOnboardingSignal(OAIGuildOnboardingResponse summary);
    void searchGuildMembersSignal(QList<OAIGuildMemberResponse> summary);
    void sendSoundboardSoundSignal();
    void setChannelPermissionOverwriteSignal();
    void setGuildApplicationCommandPermissionsSignal(OAICommandPermissionsResponse summary);
    void setGuildMfaLevelSignal(OAIGuildMFALevelResponse summary);
    void syncGuildTemplateSignal(OAIGuildTemplateResponse summary);
    void threadSearchSignal(OAIThreadSearchResponse summary);
    void triggerTypingIndicatorSignal(OAIObject summary);
    void unbanUserFromGuildSignal();
    void updateApplicationSignal(OAIPrivateApplicationResponse summary);
    void updateApplicationCommandSignal(OAIApplicationCommandResponse summary);
    void updateApplicationEmojiSignal(OAIEmojiResponse summary);
    void updateApplicationRoleConnectionsMetadataSignal(QList<OAIApplicationRoleConnectionsMetadataItemResponse> summary);
    void updateApplicationUserRoleConnectionSignal(OAIApplicationUserRoleConnectionResponse summary);
    void updateAutoModerationRuleSignal(OAICreate_auto_moderation_rule_200_response summary);
    void updateChannelSignal(OAIGet_channel_200_response summary);
    void updateGuildSignal(OAIGuildResponse summary);
    void updateGuildApplicationCommandSignal(OAIApplicationCommandResponse summary);
    void updateGuildEmojiSignal(OAIEmojiResponse summary);
    void updateGuildMemberSignal(OAIGuildMemberResponse summary);
    void updateGuildRoleSignal(OAIGuildRoleResponse summary);
    void updateGuildScheduledEventSignal(OAIList_guild_scheduled_events_200_response_inner summary);
    void updateGuildSoundboardSoundSignal(OAISoundboardSoundResponse summary);
    void updateGuildStickerSignal(OAIGuildStickerResponse summary);
    void updateGuildTemplateSignal(OAIGuildTemplateResponse summary);
    void updateGuildWelcomeScreenSignal(OAIGuildWelcomeScreenResponse summary);
    void updateGuildWidgetSettingsSignal(OAIWidgetSettingsResponse summary);
    void updateMessageSignal(OAIMessageResponse summary);
    void updateMyApplicationSignal(OAIPrivateApplicationResponse summary);
    void updateMyGuildMemberSignal(OAIPrivateGuildMemberResponse summary);
    void updateMyUserSignal(OAIUserPIIResponse summary);
    void updateOriginalWebhookMessageSignal(OAIMessageResponse summary);
    void updateSelfVoiceStateSignal();
    void updateStageInstanceSignal(OAIStageInstanceResponse summary);
    void updateVoiceStateSignal();
    void updateWebhookSignal(OAIList_channel_webhooks_200_response_inner summary);
    void updateWebhookByTokenSignal(OAIList_channel_webhooks_200_response_inner summary);
    void updateWebhookMessageSignal(OAIMessageResponse summary);
    void uploadApplicationAttachmentSignal(OAIActivitiesAttachmentResponse summary);


    void addGroupDmUserSignalFull(OAIHttpRequestWorker *worker, OAIAdd_group_dm_user_201_response summary);
    void addGuildMemberSignalFull(OAIHttpRequestWorker *worker, OAIGuildMemberResponse summary);
    void addGuildMemberRoleSignalFull(OAIHttpRequestWorker *worker);
    void addLobbyMemberSignalFull(OAIHttpRequestWorker *worker, OAILobbyMemberResponse summary);
    void addMyMessageReactionSignalFull(OAIHttpRequestWorker *worker);
    void addThreadMemberSignalFull(OAIHttpRequestWorker *worker);
    void applicationsGetActivityInstanceSignalFull(OAIHttpRequestWorker *worker, OAIEmbeddedActivityInstance summary);
    void banUserFromGuildSignalFull(OAIHttpRequestWorker *worker);
    void bulkBanUsersFromGuildSignalFull(OAIHttpRequestWorker *worker, OAIBulkBanUsersResponse summary);
    void bulkDeleteMessagesSignalFull(OAIHttpRequestWorker *worker);
    void bulkSetApplicationCommandsSignalFull(OAIHttpRequestWorker *worker, QList<OAIApplicationCommandResponse> summary);
    void bulkSetGuildApplicationCommandsSignalFull(OAIHttpRequestWorker *worker, QList<OAIApplicationCommandResponse> summary);
    void bulkUpdateGuildChannelsSignalFull(OAIHttpRequestWorker *worker);
    void bulkUpdateGuildRolesSignalFull(OAIHttpRequestWorker *worker, QList<OAIGuildRoleResponse> summary);
    void bulkUpdateLobbyMembersSignalFull(OAIHttpRequestWorker *worker, QList<OAILobbyMemberResponse> summary);
    void consumeEntitlementSignalFull(OAIHttpRequestWorker *worker);
    void createApplicationCommandSignalFull(OAIHttpRequestWorker *worker, OAIApplicationCommandResponse summary);
    void createApplicationEmojiSignalFull(OAIHttpRequestWorker *worker, OAIEmojiResponse summary);
    void createAutoModerationRuleSignalFull(OAIHttpRequestWorker *worker, OAICreate_auto_moderation_rule_200_response summary);
    void createChannelInviteSignalFull(OAIHttpRequestWorker *worker, OAIList_channel_invites_200_response_inner summary);
    void createDmSignalFull(OAIHttpRequestWorker *worker, OAIAdd_group_dm_user_201_response summary);
    void createEntitlementSignalFull(OAIHttpRequestWorker *worker, OAIEntitlementResponse summary);
    void createGuildSignalFull(OAIHttpRequestWorker *worker, OAIGuildResponse summary);
    void createGuildApplicationCommandSignalFull(OAIHttpRequestWorker *worker, OAIApplicationCommandResponse summary);
    void createGuildChannelSignalFull(OAIHttpRequestWorker *worker, OAIGuildChannelResponse summary);
    void createGuildEmojiSignalFull(OAIHttpRequestWorker *worker, OAIEmojiResponse summary);
    void createGuildFromTemplateSignalFull(OAIHttpRequestWorker *worker, OAIGuildResponse summary);
    void createGuildRoleSignalFull(OAIHttpRequestWorker *worker, OAIGuildRoleResponse summary);
    void createGuildScheduledEventSignalFull(OAIHttpRequestWorker *worker, OAIList_guild_scheduled_events_200_response_inner summary);
    void createGuildSoundboardSoundSignalFull(OAIHttpRequestWorker *worker, OAISoundboardSoundResponse summary);
    void createGuildStickerSignalFull(OAIHttpRequestWorker *worker, OAIGuildStickerResponse summary);
    void createGuildTemplateSignalFull(OAIHttpRequestWorker *worker, OAIGuildTemplateResponse summary);
    void createInteractionResponseSignalFull(OAIHttpRequestWorker *worker, OAIInteractionCallbackResponse summary);
    void createLobbySignalFull(OAIHttpRequestWorker *worker, OAILobbyResponse summary);
    void createLobbyMessageSignalFull(OAIHttpRequestWorker *worker, OAILobbyMessageResponse summary);
    void createMessageSignalFull(OAIHttpRequestWorker *worker, OAIMessageResponse summary);
    void createOrJoinLobbySignalFull(OAIHttpRequestWorker *worker, OAILobbyResponse summary);
    void createPinSignalFull(OAIHttpRequestWorker *worker);
    void createStageInstanceSignalFull(OAIHttpRequestWorker *worker, OAIStageInstanceResponse summary);
    void createThreadSignalFull(OAIHttpRequestWorker *worker, OAICreatedThreadResponse summary);
    void createThreadFromMessageSignalFull(OAIHttpRequestWorker *worker, OAIThreadResponse summary);
    void createWebhookSignalFull(OAIHttpRequestWorker *worker, OAIGuildIncomingWebhookResponse summary);
    void crosspostMessageSignalFull(OAIHttpRequestWorker *worker, OAIMessageResponse summary);
    void deleteAllMessageReactionsSignalFull(OAIHttpRequestWorker *worker);
    void deleteAllMessageReactionsByEmojiSignalFull(OAIHttpRequestWorker *worker);
    void deleteApplicationCommandSignalFull(OAIHttpRequestWorker *worker);
    void deleteApplicationEmojiSignalFull(OAIHttpRequestWorker *worker);
    void deleteApplicationUserRoleConnectionSignalFull(OAIHttpRequestWorker *worker);
    void deleteAutoModerationRuleSignalFull(OAIHttpRequestWorker *worker);
    void deleteChannelSignalFull(OAIHttpRequestWorker *worker, OAIGet_channel_200_response summary);
    void deleteChannelPermissionOverwriteSignalFull(OAIHttpRequestWorker *worker);
    void deleteEntitlementSignalFull(OAIHttpRequestWorker *worker);
    void deleteGroupDmUserSignalFull(OAIHttpRequestWorker *worker);
    void deleteGuildSignalFull(OAIHttpRequestWorker *worker);
    void deleteGuildApplicationCommandSignalFull(OAIHttpRequestWorker *worker);
    void deleteGuildEmojiSignalFull(OAIHttpRequestWorker *worker);
    void deleteGuildIntegrationSignalFull(OAIHttpRequestWorker *worker);
    void deleteGuildMemberSignalFull(OAIHttpRequestWorker *worker);
    void deleteGuildMemberRoleSignalFull(OAIHttpRequestWorker *worker);
    void deleteGuildRoleSignalFull(OAIHttpRequestWorker *worker);
    void deleteGuildScheduledEventSignalFull(OAIHttpRequestWorker *worker);
    void deleteGuildSoundboardSoundSignalFull(OAIHttpRequestWorker *worker);
    void deleteGuildStickerSignalFull(OAIHttpRequestWorker *worker);
    void deleteGuildTemplateSignalFull(OAIHttpRequestWorker *worker, OAIGuildTemplateResponse summary);
    void deleteLobbyMemberSignalFull(OAIHttpRequestWorker *worker);
    void deleteMessageSignalFull(OAIHttpRequestWorker *worker);
    void deleteMyMessageReactionSignalFull(OAIHttpRequestWorker *worker);
    void deleteOriginalWebhookMessageSignalFull(OAIHttpRequestWorker *worker);
    void deletePinSignalFull(OAIHttpRequestWorker *worker);
    void deleteStageInstanceSignalFull(OAIHttpRequestWorker *worker);
    void deleteThreadMemberSignalFull(OAIHttpRequestWorker *worker);
    void deleteUserMessageReactionSignalFull(OAIHttpRequestWorker *worker);
    void deleteWebhookSignalFull(OAIHttpRequestWorker *worker);
    void deleteWebhookByTokenSignalFull(OAIHttpRequestWorker *worker);
    void deleteWebhookMessageSignalFull(OAIHttpRequestWorker *worker);
    void deprecatedCreatePinSignalFull(OAIHttpRequestWorker *worker);
    void deprecatedDeletePinSignalFull(OAIHttpRequestWorker *worker);
    void deprecatedListPinsSignalFull(OAIHttpRequestWorker *worker, QList<OAIMessageResponse> summary);
    void editLobbySignalFull(OAIHttpRequestWorker *worker, OAILobbyResponse summary);
    void editLobbyChannelLinkSignalFull(OAIHttpRequestWorker *worker, OAILobbyResponse summary);
    void executeGithubCompatibleWebhookSignalFull(OAIHttpRequestWorker *worker);
    void executeSlackCompatibleWebhookSignalFull(OAIHttpRequestWorker *worker, QString summary);
    void executeWebhookSignalFull(OAIHttpRequestWorker *worker, OAIMessageResponse summary);
    void followChannelSignalFull(OAIHttpRequestWorker *worker, OAIChannelFollowerResponse summary);
    void getActiveGuildThreadsSignalFull(OAIHttpRequestWorker *worker, OAIThreadsResponse summary);
    void getAnswerVotersSignalFull(OAIHttpRequestWorker *worker, OAIPollAnswerDetailsResponse summary);
    void getApplicationSignalFull(OAIHttpRequestWorker *worker, OAIPrivateApplicationResponse summary);
    void getApplicationCommandSignalFull(OAIHttpRequestWorker *worker, OAIApplicationCommandResponse summary);
    void getApplicationEmojiSignalFull(OAIHttpRequestWorker *worker, OAIEmojiResponse summary);
    void getApplicationRoleConnectionsMetadataSignalFull(OAIHttpRequestWorker *worker, QList<OAIApplicationRoleConnectionsMetadataItemResponse> summary);
    void getApplicationUserRoleConnectionSignalFull(OAIHttpRequestWorker *worker, OAIApplicationUserRoleConnectionResponse summary);
    void getAutoModerationRuleSignalFull(OAIHttpRequestWorker *worker, OAICreate_auto_moderation_rule_200_response summary);
    void getBotGatewaySignalFull(OAIHttpRequestWorker *worker, OAIGatewayBotResponse summary);
    void getChannelSignalFull(OAIHttpRequestWorker *worker, OAIGet_channel_200_response summary);
    void getEntitlementSignalFull(OAIHttpRequestWorker *worker, OAIEntitlementResponse summary);
    void getEntitlementsSignalFull(OAIHttpRequestWorker *worker, QList<OAIEntitlementResponse> summary);
    void getGatewaySignalFull(OAIHttpRequestWorker *worker, OAIGatewayResponse summary);
    void getGuildSignalFull(OAIHttpRequestWorker *worker, OAIGuildWithCountsResponse summary);
    void getGuildApplicationCommandSignalFull(OAIHttpRequestWorker *worker, OAIApplicationCommandResponse summary);
    void getGuildApplicationCommandPermissionsSignalFull(OAIHttpRequestWorker *worker, OAICommandPermissionsResponse summary);
    void getGuildBanSignalFull(OAIHttpRequestWorker *worker, OAIGuildBanResponse summary);
    void getGuildEmojiSignalFull(OAIHttpRequestWorker *worker, OAIEmojiResponse summary);
    void getGuildMemberSignalFull(OAIHttpRequestWorker *worker, OAIGuildMemberResponse summary);
    void getGuildNewMemberWelcomeSignalFull(OAIHttpRequestWorker *worker, OAIGuildHomeSettingsResponse summary);
    void getGuildPreviewSignalFull(OAIHttpRequestWorker *worker, OAIGuildPreviewResponse summary);
    void getGuildRoleSignalFull(OAIHttpRequestWorker *worker, OAIGuildRoleResponse summary);
    void getGuildScheduledEventSignalFull(OAIHttpRequestWorker *worker, OAIList_guild_scheduled_events_200_response_inner summary);
    void getGuildSoundboardSoundSignalFull(OAIHttpRequestWorker *worker, OAISoundboardSoundResponse summary);
    void getGuildStickerSignalFull(OAIHttpRequestWorker *worker, OAIGuildStickerResponse summary);
    void getGuildTemplateSignalFull(OAIHttpRequestWorker *worker, OAIGuildTemplateResponse summary);
    void getGuildVanityUrlSignalFull(OAIHttpRequestWorker *worker, OAIVanityURLResponse summary);
    void getGuildWebhooksSignalFull(OAIHttpRequestWorker *worker, QList<OAIList_channel_webhooks_200_response_inner> summary);
    void getGuildWelcomeScreenSignalFull(OAIHttpRequestWorker *worker, OAIGuildWelcomeScreenResponse summary);
    void getGuildWidgetSignalFull(OAIHttpRequestWorker *worker, OAIWidgetResponse summary);
    void getGuildWidgetPngSignalFull(OAIHttpRequestWorker *worker, QString summary);
    void getGuildWidgetSettingsSignalFull(OAIHttpRequestWorker *worker, OAIWidgetSettingsResponse summary);
    void getGuildsOnboardingSignalFull(OAIHttpRequestWorker *worker, OAIUserGuildOnboardingResponse summary);
    void getLobbySignalFull(OAIHttpRequestWorker *worker, OAILobbyResponse summary);
    void getLobbyMessagesSignalFull(OAIHttpRequestWorker *worker, QList<OAILobbyMessageResponse> summary);
    void getMessageSignalFull(OAIHttpRequestWorker *worker, OAIMessageResponse summary);
    void getMyApplicationSignalFull(OAIHttpRequestWorker *worker, OAIPrivateApplicationResponse summary);
    void getMyGuildMemberSignalFull(OAIHttpRequestWorker *worker, OAIPrivateGuildMemberResponse summary);
    void getMyOauth2ApplicationSignalFull(OAIHttpRequestWorker *worker, OAIPrivateApplicationResponse summary);
    void getMyOauth2AuthorizationSignalFull(OAIHttpRequestWorker *worker, OAIOAuth2GetAuthorizationResponse summary);
    void getMyUserSignalFull(OAIHttpRequestWorker *worker, OAIUserPIIResponse summary);
    void getOpenidConnectUserinfoSignalFull(OAIHttpRequestWorker *worker, OAIOAuth2GetOpenIDConnectUserInfoResponse summary);
    void getOriginalWebhookMessageSignalFull(OAIHttpRequestWorker *worker, OAIMessageResponse summary);
    void getPublicKeysSignalFull(OAIHttpRequestWorker *worker, OAIOAuth2GetKeys summary);
    void getSelfVoiceStateSignalFull(OAIHttpRequestWorker *worker, OAIVoiceStateResponse summary);
    void getSoundboardDefaultSoundsSignalFull(OAIHttpRequestWorker *worker, QList<OAISoundboardSoundResponse> summary);
    void getStageInstanceSignalFull(OAIHttpRequestWorker *worker, OAIStageInstanceResponse summary);
    void getStickerSignalFull(OAIHttpRequestWorker *worker, OAIGet_sticker_200_response summary);
    void getStickerPackSignalFull(OAIHttpRequestWorker *worker, OAIStickerPackResponse summary);
    void getThreadMemberSignalFull(OAIHttpRequestWorker *worker, OAIThreadMemberResponse summary);
    void getUserSignalFull(OAIHttpRequestWorker *worker, OAIUserResponse summary);
    void getVoiceStateSignalFull(OAIHttpRequestWorker *worker, OAIVoiceStateResponse summary);
    void getWebhookSignalFull(OAIHttpRequestWorker *worker, OAIList_channel_webhooks_200_response_inner summary);
    void getWebhookByTokenSignalFull(OAIHttpRequestWorker *worker, OAIList_channel_webhooks_200_response_inner summary);
    void getWebhookMessageSignalFull(OAIHttpRequestWorker *worker, OAIMessageResponse summary);
    void inviteResolveSignalFull(OAIHttpRequestWorker *worker, OAIList_channel_invites_200_response_inner summary);
    void inviteRevokeSignalFull(OAIHttpRequestWorker *worker, OAIList_channel_invites_200_response_inner summary);
    void joinThreadSignalFull(OAIHttpRequestWorker *worker);
    void leaveGuildSignalFull(OAIHttpRequestWorker *worker);
    void leaveLobbySignalFull(OAIHttpRequestWorker *worker);
    void leaveThreadSignalFull(OAIHttpRequestWorker *worker);
    void listApplicationCommandsSignalFull(OAIHttpRequestWorker *worker, QList<OAIApplicationCommandResponse> summary);
    void listApplicationEmojisSignalFull(OAIHttpRequestWorker *worker, OAIListApplicationEmojisResponse summary);
    void listAutoModerationRulesSignalFull(OAIHttpRequestWorker *worker, QList<OAIList_auto_moderation_rules_200_response_inner> summary);
    void listChannelInvitesSignalFull(OAIHttpRequestWorker *worker, QList<OAIList_channel_invites_200_response_inner> summary);
    void listChannelWebhooksSignalFull(OAIHttpRequestWorker *worker, QList<OAIList_channel_webhooks_200_response_inner> summary);
    void listGuildApplicationCommandPermissionsSignalFull(OAIHttpRequestWorker *worker, QList<OAICommandPermissionsResponse> summary);
    void listGuildApplicationCommandsSignalFull(OAIHttpRequestWorker *worker, QList<OAIApplicationCommandResponse> summary);
    void listGuildAuditLogEntriesSignalFull(OAIHttpRequestWorker *worker, OAIGuildAuditLogResponse summary);
    void listGuildBansSignalFull(OAIHttpRequestWorker *worker, QList<OAIGuildBanResponse> summary);
    void listGuildChannelsSignalFull(OAIHttpRequestWorker *worker, QList<OAIGet_channel_200_response> summary);
    void listGuildEmojisSignalFull(OAIHttpRequestWorker *worker, QList<OAIEmojiResponse> summary);
    void listGuildIntegrationsSignalFull(OAIHttpRequestWorker *worker, QList<OAIList_guild_integrations_200_response_inner> summary);
    void listGuildInvitesSignalFull(OAIHttpRequestWorker *worker, QList<OAIList_channel_invites_200_response_inner> summary);
    void listGuildMembersSignalFull(OAIHttpRequestWorker *worker, QList<OAIGuildMemberResponse> summary);
    void listGuildRolesSignalFull(OAIHttpRequestWorker *worker, QList<OAIGuildRoleResponse> summary);
    void listGuildScheduledEventUsersSignalFull(OAIHttpRequestWorker *worker, QList<OAIScheduledEventUserResponse> summary);
    void listGuildScheduledEventsSignalFull(OAIHttpRequestWorker *worker, QList<OAIList_guild_scheduled_events_200_response_inner> summary);
    void listGuildSoundboardSoundsSignalFull(OAIHttpRequestWorker *worker, OAIListGuildSoundboardSoundsResponse summary);
    void listGuildStickersSignalFull(OAIHttpRequestWorker *worker, QList<OAIGuildStickerResponse> summary);
    void listGuildTemplatesSignalFull(OAIHttpRequestWorker *worker, QList<OAIGuildTemplateResponse> summary);
    void listGuildVoiceRegionsSignalFull(OAIHttpRequestWorker *worker, QList<OAIVoiceRegionResponse> summary);
    void listMessageReactionsByEmojiSignalFull(OAIHttpRequestWorker *worker, QList<OAIUserResponse> summary);
    void listMessagesSignalFull(OAIHttpRequestWorker *worker, QList<OAIMessageResponse> summary);
    void listMyConnectionsSignalFull(OAIHttpRequestWorker *worker, QList<OAIConnectedAccountResponse> summary);
    void listMyGuildsSignalFull(OAIHttpRequestWorker *worker, QList<OAIMyGuildResponse> summary);
    void listMyPrivateArchivedThreadsSignalFull(OAIHttpRequestWorker *worker, OAIThreadsResponse summary);
    void listPinsSignalFull(OAIHttpRequestWorker *worker, OAIPinnedMessagesResponse summary);
    void listPrivateArchivedThreadsSignalFull(OAIHttpRequestWorker *worker, OAIThreadsResponse summary);
    void listPublicArchivedThreadsSignalFull(OAIHttpRequestWorker *worker, OAIThreadsResponse summary);
    void listStickerPacksSignalFull(OAIHttpRequestWorker *worker, OAIStickerPackCollectionResponse summary);
    void listThreadMembersSignalFull(OAIHttpRequestWorker *worker, QList<OAIThreadMemberResponse> summary);
    void listVoiceRegionsSignalFull(OAIHttpRequestWorker *worker, QList<OAIVoiceRegionResponse> summary);
    void partnerSdkTokenSignalFull(OAIHttpRequestWorker *worker, OAIProvisionalTokenResponse summary);
    void partnerSdkUnmergeProvisionalAccountSignalFull(OAIHttpRequestWorker *worker);
    void pollExpireSignalFull(OAIHttpRequestWorker *worker, OAIMessageResponse summary);
    void previewPruneGuildSignalFull(OAIHttpRequestWorker *worker, OAIGuildPruneResponse summary);
    void pruneGuildSignalFull(OAIHttpRequestWorker *worker, OAIGuildPruneResponse summary);
    void putGuildsOnboardingSignalFull(OAIHttpRequestWorker *worker, OAIGuildOnboardingResponse summary);
    void searchGuildMembersSignalFull(OAIHttpRequestWorker *worker, QList<OAIGuildMemberResponse> summary);
    void sendSoundboardSoundSignalFull(OAIHttpRequestWorker *worker);
    void setChannelPermissionOverwriteSignalFull(OAIHttpRequestWorker *worker);
    void setGuildApplicationCommandPermissionsSignalFull(OAIHttpRequestWorker *worker, OAICommandPermissionsResponse summary);
    void setGuildMfaLevelSignalFull(OAIHttpRequestWorker *worker, OAIGuildMFALevelResponse summary);
    void syncGuildTemplateSignalFull(OAIHttpRequestWorker *worker, OAIGuildTemplateResponse summary);
    void threadSearchSignalFull(OAIHttpRequestWorker *worker, OAIThreadSearchResponse summary);
    void triggerTypingIndicatorSignalFull(OAIHttpRequestWorker *worker, OAIObject summary);
    void unbanUserFromGuildSignalFull(OAIHttpRequestWorker *worker);
    void updateApplicationSignalFull(OAIHttpRequestWorker *worker, OAIPrivateApplicationResponse summary);
    void updateApplicationCommandSignalFull(OAIHttpRequestWorker *worker, OAIApplicationCommandResponse summary);
    void updateApplicationEmojiSignalFull(OAIHttpRequestWorker *worker, OAIEmojiResponse summary);
    void updateApplicationRoleConnectionsMetadataSignalFull(OAIHttpRequestWorker *worker, QList<OAIApplicationRoleConnectionsMetadataItemResponse> summary);
    void updateApplicationUserRoleConnectionSignalFull(OAIHttpRequestWorker *worker, OAIApplicationUserRoleConnectionResponse summary);
    void updateAutoModerationRuleSignalFull(OAIHttpRequestWorker *worker, OAICreate_auto_moderation_rule_200_response summary);
    void updateChannelSignalFull(OAIHttpRequestWorker *worker, OAIGet_channel_200_response summary);
    void updateGuildSignalFull(OAIHttpRequestWorker *worker, OAIGuildResponse summary);
    void updateGuildApplicationCommandSignalFull(OAIHttpRequestWorker *worker, OAIApplicationCommandResponse summary);
    void updateGuildEmojiSignalFull(OAIHttpRequestWorker *worker, OAIEmojiResponse summary);
    void updateGuildMemberSignalFull(OAIHttpRequestWorker *worker, OAIGuildMemberResponse summary);
    void updateGuildRoleSignalFull(OAIHttpRequestWorker *worker, OAIGuildRoleResponse summary);
    void updateGuildScheduledEventSignalFull(OAIHttpRequestWorker *worker, OAIList_guild_scheduled_events_200_response_inner summary);
    void updateGuildSoundboardSoundSignalFull(OAIHttpRequestWorker *worker, OAISoundboardSoundResponse summary);
    void updateGuildStickerSignalFull(OAIHttpRequestWorker *worker, OAIGuildStickerResponse summary);
    void updateGuildTemplateSignalFull(OAIHttpRequestWorker *worker, OAIGuildTemplateResponse summary);
    void updateGuildWelcomeScreenSignalFull(OAIHttpRequestWorker *worker, OAIGuildWelcomeScreenResponse summary);
    void updateGuildWidgetSettingsSignalFull(OAIHttpRequestWorker *worker, OAIWidgetSettingsResponse summary);
    void updateMessageSignalFull(OAIHttpRequestWorker *worker, OAIMessageResponse summary);
    void updateMyApplicationSignalFull(OAIHttpRequestWorker *worker, OAIPrivateApplicationResponse summary);
    void updateMyGuildMemberSignalFull(OAIHttpRequestWorker *worker, OAIPrivateGuildMemberResponse summary);
    void updateMyUserSignalFull(OAIHttpRequestWorker *worker, OAIUserPIIResponse summary);
    void updateOriginalWebhookMessageSignalFull(OAIHttpRequestWorker *worker, OAIMessageResponse summary);
    void updateSelfVoiceStateSignalFull(OAIHttpRequestWorker *worker);
    void updateStageInstanceSignalFull(OAIHttpRequestWorker *worker, OAIStageInstanceResponse summary);
    void updateVoiceStateSignalFull(OAIHttpRequestWorker *worker);
    void updateWebhookSignalFull(OAIHttpRequestWorker *worker, OAIList_channel_webhooks_200_response_inner summary);
    void updateWebhookByTokenSignalFull(OAIHttpRequestWorker *worker, OAIList_channel_webhooks_200_response_inner summary);
    void updateWebhookMessageSignalFull(OAIHttpRequestWorker *worker, OAIMessageResponse summary);
    void uploadApplicationAttachmentSignalFull(OAIHttpRequestWorker *worker, OAIActivitiesAttachmentResponse summary);

    Q_DECL_DEPRECATED_X("Use addGroupDmUserSignalError() instead")
    void addGroupDmUserSignalE(OAIAdd_group_dm_user_201_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void addGroupDmUserSignalError(OAIAdd_group_dm_user_201_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use addGuildMemberSignalError() instead")
    void addGuildMemberSignalE(OAIGuildMemberResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void addGuildMemberSignalError(OAIGuildMemberResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use addGuildMemberRoleSignalError() instead")
    void addGuildMemberRoleSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void addGuildMemberRoleSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use addLobbyMemberSignalError() instead")
    void addLobbyMemberSignalE(OAILobbyMemberResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void addLobbyMemberSignalError(OAILobbyMemberResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use addMyMessageReactionSignalError() instead")
    void addMyMessageReactionSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void addMyMessageReactionSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use addThreadMemberSignalError() instead")
    void addThreadMemberSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void addThreadMemberSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use applicationsGetActivityInstanceSignalError() instead")
    void applicationsGetActivityInstanceSignalE(OAIEmbeddedActivityInstance summary, QNetworkReply::NetworkError error_type, QString error_str);
    void applicationsGetActivityInstanceSignalError(OAIEmbeddedActivityInstance summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use banUserFromGuildSignalError() instead")
    void banUserFromGuildSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void banUserFromGuildSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkBanUsersFromGuildSignalError() instead")
    void bulkBanUsersFromGuildSignalE(OAIBulkBanUsersResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void bulkBanUsersFromGuildSignalError(OAIBulkBanUsersResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkDeleteMessagesSignalError() instead")
    void bulkDeleteMessagesSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void bulkDeleteMessagesSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkSetApplicationCommandsSignalError() instead")
    void bulkSetApplicationCommandsSignalE(QList<OAIApplicationCommandResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void bulkSetApplicationCommandsSignalError(QList<OAIApplicationCommandResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkSetGuildApplicationCommandsSignalError() instead")
    void bulkSetGuildApplicationCommandsSignalE(QList<OAIApplicationCommandResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void bulkSetGuildApplicationCommandsSignalError(QList<OAIApplicationCommandResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkUpdateGuildChannelsSignalError() instead")
    void bulkUpdateGuildChannelsSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void bulkUpdateGuildChannelsSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkUpdateGuildRolesSignalError() instead")
    void bulkUpdateGuildRolesSignalE(QList<OAIGuildRoleResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void bulkUpdateGuildRolesSignalError(QList<OAIGuildRoleResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkUpdateLobbyMembersSignalError() instead")
    void bulkUpdateLobbyMembersSignalE(QList<OAILobbyMemberResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void bulkUpdateLobbyMembersSignalError(QList<OAILobbyMemberResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use consumeEntitlementSignalError() instead")
    void consumeEntitlementSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void consumeEntitlementSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createApplicationCommandSignalError() instead")
    void createApplicationCommandSignalE(OAIApplicationCommandResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createApplicationCommandSignalError(OAIApplicationCommandResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createApplicationEmojiSignalError() instead")
    void createApplicationEmojiSignalE(OAIEmojiResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createApplicationEmojiSignalError(OAIEmojiResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createAutoModerationRuleSignalError() instead")
    void createAutoModerationRuleSignalE(OAICreate_auto_moderation_rule_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createAutoModerationRuleSignalError(OAICreate_auto_moderation_rule_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createChannelInviteSignalError() instead")
    void createChannelInviteSignalE(OAIList_channel_invites_200_response_inner summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createChannelInviteSignalError(OAIList_channel_invites_200_response_inner summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createDmSignalError() instead")
    void createDmSignalE(OAIAdd_group_dm_user_201_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createDmSignalError(OAIAdd_group_dm_user_201_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createEntitlementSignalError() instead")
    void createEntitlementSignalE(OAIEntitlementResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createEntitlementSignalError(OAIEntitlementResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildSignalError() instead")
    void createGuildSignalE(OAIGuildResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildSignalError(OAIGuildResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildApplicationCommandSignalError() instead")
    void createGuildApplicationCommandSignalE(OAIApplicationCommandResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildApplicationCommandSignalError(OAIApplicationCommandResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildChannelSignalError() instead")
    void createGuildChannelSignalE(OAIGuildChannelResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildChannelSignalError(OAIGuildChannelResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildEmojiSignalError() instead")
    void createGuildEmojiSignalE(OAIEmojiResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildEmojiSignalError(OAIEmojiResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildFromTemplateSignalError() instead")
    void createGuildFromTemplateSignalE(OAIGuildResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildFromTemplateSignalError(OAIGuildResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildRoleSignalError() instead")
    void createGuildRoleSignalE(OAIGuildRoleResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildRoleSignalError(OAIGuildRoleResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildScheduledEventSignalError() instead")
    void createGuildScheduledEventSignalE(OAIList_guild_scheduled_events_200_response_inner summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildScheduledEventSignalError(OAIList_guild_scheduled_events_200_response_inner summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildSoundboardSoundSignalError() instead")
    void createGuildSoundboardSoundSignalE(OAISoundboardSoundResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildSoundboardSoundSignalError(OAISoundboardSoundResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildStickerSignalError() instead")
    void createGuildStickerSignalE(OAIGuildStickerResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildStickerSignalError(OAIGuildStickerResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildTemplateSignalError() instead")
    void createGuildTemplateSignalE(OAIGuildTemplateResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildTemplateSignalError(OAIGuildTemplateResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createInteractionResponseSignalError() instead")
    void createInteractionResponseSignalE(OAIInteractionCallbackResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createInteractionResponseSignalError(OAIInteractionCallbackResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createLobbySignalError() instead")
    void createLobbySignalE(OAILobbyResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createLobbySignalError(OAILobbyResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createLobbyMessageSignalError() instead")
    void createLobbyMessageSignalE(OAILobbyMessageResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createLobbyMessageSignalError(OAILobbyMessageResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createMessageSignalError() instead")
    void createMessageSignalE(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createMessageSignalError(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createOrJoinLobbySignalError() instead")
    void createOrJoinLobbySignalE(OAILobbyResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createOrJoinLobbySignalError(OAILobbyResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createPinSignalError() instead")
    void createPinSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void createPinSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createStageInstanceSignalError() instead")
    void createStageInstanceSignalE(OAIStageInstanceResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createStageInstanceSignalError(OAIStageInstanceResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createThreadSignalError() instead")
    void createThreadSignalE(OAICreatedThreadResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createThreadSignalError(OAICreatedThreadResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createThreadFromMessageSignalError() instead")
    void createThreadFromMessageSignalE(OAIThreadResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createThreadFromMessageSignalError(OAIThreadResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createWebhookSignalError() instead")
    void createWebhookSignalE(OAIGuildIncomingWebhookResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createWebhookSignalError(OAIGuildIncomingWebhookResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use crosspostMessageSignalError() instead")
    void crosspostMessageSignalE(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void crosspostMessageSignalError(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteAllMessageReactionsSignalError() instead")
    void deleteAllMessageReactionsSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteAllMessageReactionsSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteAllMessageReactionsByEmojiSignalError() instead")
    void deleteAllMessageReactionsByEmojiSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteAllMessageReactionsByEmojiSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteApplicationCommandSignalError() instead")
    void deleteApplicationCommandSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteApplicationCommandSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteApplicationEmojiSignalError() instead")
    void deleteApplicationEmojiSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteApplicationEmojiSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteApplicationUserRoleConnectionSignalError() instead")
    void deleteApplicationUserRoleConnectionSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteApplicationUserRoleConnectionSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteAutoModerationRuleSignalError() instead")
    void deleteAutoModerationRuleSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteAutoModerationRuleSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteChannelSignalError() instead")
    void deleteChannelSignalE(OAIGet_channel_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteChannelSignalError(OAIGet_channel_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteChannelPermissionOverwriteSignalError() instead")
    void deleteChannelPermissionOverwriteSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteChannelPermissionOverwriteSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteEntitlementSignalError() instead")
    void deleteEntitlementSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteEntitlementSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGroupDmUserSignalError() instead")
    void deleteGroupDmUserSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGroupDmUserSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildSignalError() instead")
    void deleteGuildSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildApplicationCommandSignalError() instead")
    void deleteGuildApplicationCommandSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildApplicationCommandSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildEmojiSignalError() instead")
    void deleteGuildEmojiSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildEmojiSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildIntegrationSignalError() instead")
    void deleteGuildIntegrationSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildIntegrationSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildMemberSignalError() instead")
    void deleteGuildMemberSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildMemberSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildMemberRoleSignalError() instead")
    void deleteGuildMemberRoleSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildMemberRoleSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildRoleSignalError() instead")
    void deleteGuildRoleSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildRoleSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildScheduledEventSignalError() instead")
    void deleteGuildScheduledEventSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildScheduledEventSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildSoundboardSoundSignalError() instead")
    void deleteGuildSoundboardSoundSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildSoundboardSoundSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildStickerSignalError() instead")
    void deleteGuildStickerSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildStickerSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildTemplateSignalError() instead")
    void deleteGuildTemplateSignalE(OAIGuildTemplateResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildTemplateSignalError(OAIGuildTemplateResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteLobbyMemberSignalError() instead")
    void deleteLobbyMemberSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteLobbyMemberSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteMessageSignalError() instead")
    void deleteMessageSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteMessageSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteMyMessageReactionSignalError() instead")
    void deleteMyMessageReactionSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteMyMessageReactionSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteOriginalWebhookMessageSignalError() instead")
    void deleteOriginalWebhookMessageSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteOriginalWebhookMessageSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deletePinSignalError() instead")
    void deletePinSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deletePinSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteStageInstanceSignalError() instead")
    void deleteStageInstanceSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteStageInstanceSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteThreadMemberSignalError() instead")
    void deleteThreadMemberSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteThreadMemberSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteUserMessageReactionSignalError() instead")
    void deleteUserMessageReactionSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteUserMessageReactionSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteWebhookSignalError() instead")
    void deleteWebhookSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteWebhookSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteWebhookByTokenSignalError() instead")
    void deleteWebhookByTokenSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteWebhookByTokenSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteWebhookMessageSignalError() instead")
    void deleteWebhookMessageSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteWebhookMessageSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deprecatedCreatePinSignalError() instead")
    void deprecatedCreatePinSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deprecatedCreatePinSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deprecatedDeletePinSignalError() instead")
    void deprecatedDeletePinSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deprecatedDeletePinSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deprecatedListPinsSignalError() instead")
    void deprecatedListPinsSignalE(QList<OAIMessageResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deprecatedListPinsSignalError(QList<OAIMessageResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editLobbySignalError() instead")
    void editLobbySignalE(OAILobbyResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void editLobbySignalError(OAILobbyResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editLobbyChannelLinkSignalError() instead")
    void editLobbyChannelLinkSignalE(OAILobbyResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void editLobbyChannelLinkSignalError(OAILobbyResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use executeGithubCompatibleWebhookSignalError() instead")
    void executeGithubCompatibleWebhookSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void executeGithubCompatibleWebhookSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use executeSlackCompatibleWebhookSignalError() instead")
    void executeSlackCompatibleWebhookSignalE(QString summary, QNetworkReply::NetworkError error_type, QString error_str);
    void executeSlackCompatibleWebhookSignalError(QString summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use executeWebhookSignalError() instead")
    void executeWebhookSignalE(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void executeWebhookSignalError(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use followChannelSignalError() instead")
    void followChannelSignalE(OAIChannelFollowerResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void followChannelSignalError(OAIChannelFollowerResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getActiveGuildThreadsSignalError() instead")
    void getActiveGuildThreadsSignalE(OAIThreadsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getActiveGuildThreadsSignalError(OAIThreadsResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getAnswerVotersSignalError() instead")
    void getAnswerVotersSignalE(OAIPollAnswerDetailsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getAnswerVotersSignalError(OAIPollAnswerDetailsResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getApplicationSignalError() instead")
    void getApplicationSignalE(OAIPrivateApplicationResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getApplicationSignalError(OAIPrivateApplicationResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getApplicationCommandSignalError() instead")
    void getApplicationCommandSignalE(OAIApplicationCommandResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getApplicationCommandSignalError(OAIApplicationCommandResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getApplicationEmojiSignalError() instead")
    void getApplicationEmojiSignalE(OAIEmojiResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getApplicationEmojiSignalError(OAIEmojiResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getApplicationRoleConnectionsMetadataSignalError() instead")
    void getApplicationRoleConnectionsMetadataSignalE(QList<OAIApplicationRoleConnectionsMetadataItemResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getApplicationRoleConnectionsMetadataSignalError(QList<OAIApplicationRoleConnectionsMetadataItemResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getApplicationUserRoleConnectionSignalError() instead")
    void getApplicationUserRoleConnectionSignalE(OAIApplicationUserRoleConnectionResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getApplicationUserRoleConnectionSignalError(OAIApplicationUserRoleConnectionResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getAutoModerationRuleSignalError() instead")
    void getAutoModerationRuleSignalE(OAICreate_auto_moderation_rule_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getAutoModerationRuleSignalError(OAICreate_auto_moderation_rule_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getBotGatewaySignalError() instead")
    void getBotGatewaySignalE(OAIGatewayBotResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getBotGatewaySignalError(OAIGatewayBotResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getChannelSignalError() instead")
    void getChannelSignalE(OAIGet_channel_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getChannelSignalError(OAIGet_channel_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getEntitlementSignalError() instead")
    void getEntitlementSignalE(OAIEntitlementResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getEntitlementSignalError(OAIEntitlementResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getEntitlementsSignalError() instead")
    void getEntitlementsSignalE(QList<OAIEntitlementResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getEntitlementsSignalError(QList<OAIEntitlementResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGatewaySignalError() instead")
    void getGatewaySignalE(OAIGatewayResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGatewaySignalError(OAIGatewayResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildSignalError() instead")
    void getGuildSignalE(OAIGuildWithCountsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildSignalError(OAIGuildWithCountsResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildApplicationCommandSignalError() instead")
    void getGuildApplicationCommandSignalE(OAIApplicationCommandResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildApplicationCommandSignalError(OAIApplicationCommandResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildApplicationCommandPermissionsSignalError() instead")
    void getGuildApplicationCommandPermissionsSignalE(OAICommandPermissionsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildApplicationCommandPermissionsSignalError(OAICommandPermissionsResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildBanSignalError() instead")
    void getGuildBanSignalE(OAIGuildBanResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildBanSignalError(OAIGuildBanResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildEmojiSignalError() instead")
    void getGuildEmojiSignalE(OAIEmojiResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildEmojiSignalError(OAIEmojiResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildMemberSignalError() instead")
    void getGuildMemberSignalE(OAIGuildMemberResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildMemberSignalError(OAIGuildMemberResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildNewMemberWelcomeSignalError() instead")
    void getGuildNewMemberWelcomeSignalE(OAIGuildHomeSettingsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildNewMemberWelcomeSignalError(OAIGuildHomeSettingsResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildPreviewSignalError() instead")
    void getGuildPreviewSignalE(OAIGuildPreviewResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildPreviewSignalError(OAIGuildPreviewResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildRoleSignalError() instead")
    void getGuildRoleSignalE(OAIGuildRoleResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildRoleSignalError(OAIGuildRoleResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildScheduledEventSignalError() instead")
    void getGuildScheduledEventSignalE(OAIList_guild_scheduled_events_200_response_inner summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildScheduledEventSignalError(OAIList_guild_scheduled_events_200_response_inner summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildSoundboardSoundSignalError() instead")
    void getGuildSoundboardSoundSignalE(OAISoundboardSoundResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildSoundboardSoundSignalError(OAISoundboardSoundResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildStickerSignalError() instead")
    void getGuildStickerSignalE(OAIGuildStickerResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildStickerSignalError(OAIGuildStickerResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildTemplateSignalError() instead")
    void getGuildTemplateSignalE(OAIGuildTemplateResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildTemplateSignalError(OAIGuildTemplateResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildVanityUrlSignalError() instead")
    void getGuildVanityUrlSignalE(OAIVanityURLResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildVanityUrlSignalError(OAIVanityURLResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildWebhooksSignalError() instead")
    void getGuildWebhooksSignalE(QList<OAIList_channel_webhooks_200_response_inner> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildWebhooksSignalError(QList<OAIList_channel_webhooks_200_response_inner> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildWelcomeScreenSignalError() instead")
    void getGuildWelcomeScreenSignalE(OAIGuildWelcomeScreenResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildWelcomeScreenSignalError(OAIGuildWelcomeScreenResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildWidgetSignalError() instead")
    void getGuildWidgetSignalE(OAIWidgetResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildWidgetSignalError(OAIWidgetResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildWidgetPngSignalError() instead")
    void getGuildWidgetPngSignalE(QString summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildWidgetPngSignalError(QString summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildWidgetSettingsSignalError() instead")
    void getGuildWidgetSettingsSignalE(OAIWidgetSettingsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildWidgetSettingsSignalError(OAIWidgetSettingsResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildsOnboardingSignalError() instead")
    void getGuildsOnboardingSignalE(OAIUserGuildOnboardingResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildsOnboardingSignalError(OAIUserGuildOnboardingResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getLobbySignalError() instead")
    void getLobbySignalE(OAILobbyResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getLobbySignalError(OAILobbyResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getLobbyMessagesSignalError() instead")
    void getLobbyMessagesSignalE(QList<OAILobbyMessageResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getLobbyMessagesSignalError(QList<OAILobbyMessageResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMessageSignalError() instead")
    void getMessageSignalE(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMessageSignalError(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyApplicationSignalError() instead")
    void getMyApplicationSignalE(OAIPrivateApplicationResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyApplicationSignalError(OAIPrivateApplicationResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyGuildMemberSignalError() instead")
    void getMyGuildMemberSignalE(OAIPrivateGuildMemberResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyGuildMemberSignalError(OAIPrivateGuildMemberResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyOauth2ApplicationSignalError() instead")
    void getMyOauth2ApplicationSignalE(OAIPrivateApplicationResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyOauth2ApplicationSignalError(OAIPrivateApplicationResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyOauth2AuthorizationSignalError() instead")
    void getMyOauth2AuthorizationSignalE(OAIOAuth2GetAuthorizationResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyOauth2AuthorizationSignalError(OAIOAuth2GetAuthorizationResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyUserSignalError() instead")
    void getMyUserSignalE(OAIUserPIIResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyUserSignalError(OAIUserPIIResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getOpenidConnectUserinfoSignalError() instead")
    void getOpenidConnectUserinfoSignalE(OAIOAuth2GetOpenIDConnectUserInfoResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOpenidConnectUserinfoSignalError(OAIOAuth2GetOpenIDConnectUserInfoResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getOriginalWebhookMessageSignalError() instead")
    void getOriginalWebhookMessageSignalE(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOriginalWebhookMessageSignalError(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getPublicKeysSignalError() instead")
    void getPublicKeysSignalE(OAIOAuth2GetKeys summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getPublicKeysSignalError(OAIOAuth2GetKeys summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getSelfVoiceStateSignalError() instead")
    void getSelfVoiceStateSignalE(OAIVoiceStateResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getSelfVoiceStateSignalError(OAIVoiceStateResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getSoundboardDefaultSoundsSignalError() instead")
    void getSoundboardDefaultSoundsSignalE(QList<OAISoundboardSoundResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getSoundboardDefaultSoundsSignalError(QList<OAISoundboardSoundResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getStageInstanceSignalError() instead")
    void getStageInstanceSignalE(OAIStageInstanceResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getStageInstanceSignalError(OAIStageInstanceResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getStickerSignalError() instead")
    void getStickerSignalE(OAIGet_sticker_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getStickerSignalError(OAIGet_sticker_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getStickerPackSignalError() instead")
    void getStickerPackSignalE(OAIStickerPackResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getStickerPackSignalError(OAIStickerPackResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getThreadMemberSignalError() instead")
    void getThreadMemberSignalE(OAIThreadMemberResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getThreadMemberSignalError(OAIThreadMemberResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getUserSignalError() instead")
    void getUserSignalE(OAIUserResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getUserSignalError(OAIUserResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getVoiceStateSignalError() instead")
    void getVoiceStateSignalE(OAIVoiceStateResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getVoiceStateSignalError(OAIVoiceStateResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getWebhookSignalError() instead")
    void getWebhookSignalE(OAIList_channel_webhooks_200_response_inner summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getWebhookSignalError(OAIList_channel_webhooks_200_response_inner summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getWebhookByTokenSignalError() instead")
    void getWebhookByTokenSignalE(OAIList_channel_webhooks_200_response_inner summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getWebhookByTokenSignalError(OAIList_channel_webhooks_200_response_inner summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getWebhookMessageSignalError() instead")
    void getWebhookMessageSignalE(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getWebhookMessageSignalError(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inviteResolveSignalError() instead")
    void inviteResolveSignalE(OAIList_channel_invites_200_response_inner summary, QNetworkReply::NetworkError error_type, QString error_str);
    void inviteResolveSignalError(OAIList_channel_invites_200_response_inner summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inviteRevokeSignalError() instead")
    void inviteRevokeSignalE(OAIList_channel_invites_200_response_inner summary, QNetworkReply::NetworkError error_type, QString error_str);
    void inviteRevokeSignalError(OAIList_channel_invites_200_response_inner summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use joinThreadSignalError() instead")
    void joinThreadSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void joinThreadSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use leaveGuildSignalError() instead")
    void leaveGuildSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void leaveGuildSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use leaveLobbySignalError() instead")
    void leaveLobbySignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void leaveLobbySignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use leaveThreadSignalError() instead")
    void leaveThreadSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void leaveThreadSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listApplicationCommandsSignalError() instead")
    void listApplicationCommandsSignalE(QList<OAIApplicationCommandResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listApplicationCommandsSignalError(QList<OAIApplicationCommandResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listApplicationEmojisSignalError() instead")
    void listApplicationEmojisSignalE(OAIListApplicationEmojisResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listApplicationEmojisSignalError(OAIListApplicationEmojisResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listAutoModerationRulesSignalError() instead")
    void listAutoModerationRulesSignalE(QList<OAIList_auto_moderation_rules_200_response_inner> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listAutoModerationRulesSignalError(QList<OAIList_auto_moderation_rules_200_response_inner> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listChannelInvitesSignalError() instead")
    void listChannelInvitesSignalE(QList<OAIList_channel_invites_200_response_inner> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listChannelInvitesSignalError(QList<OAIList_channel_invites_200_response_inner> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listChannelWebhooksSignalError() instead")
    void listChannelWebhooksSignalE(QList<OAIList_channel_webhooks_200_response_inner> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listChannelWebhooksSignalError(QList<OAIList_channel_webhooks_200_response_inner> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildApplicationCommandPermissionsSignalError() instead")
    void listGuildApplicationCommandPermissionsSignalE(QList<OAICommandPermissionsResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildApplicationCommandPermissionsSignalError(QList<OAICommandPermissionsResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildApplicationCommandsSignalError() instead")
    void listGuildApplicationCommandsSignalE(QList<OAIApplicationCommandResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildApplicationCommandsSignalError(QList<OAIApplicationCommandResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildAuditLogEntriesSignalError() instead")
    void listGuildAuditLogEntriesSignalE(OAIGuildAuditLogResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildAuditLogEntriesSignalError(OAIGuildAuditLogResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildBansSignalError() instead")
    void listGuildBansSignalE(QList<OAIGuildBanResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildBansSignalError(QList<OAIGuildBanResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildChannelsSignalError() instead")
    void listGuildChannelsSignalE(QList<OAIGet_channel_200_response> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildChannelsSignalError(QList<OAIGet_channel_200_response> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildEmojisSignalError() instead")
    void listGuildEmojisSignalE(QList<OAIEmojiResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildEmojisSignalError(QList<OAIEmojiResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildIntegrationsSignalError() instead")
    void listGuildIntegrationsSignalE(QList<OAIList_guild_integrations_200_response_inner> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildIntegrationsSignalError(QList<OAIList_guild_integrations_200_response_inner> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildInvitesSignalError() instead")
    void listGuildInvitesSignalE(QList<OAIList_channel_invites_200_response_inner> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildInvitesSignalError(QList<OAIList_channel_invites_200_response_inner> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildMembersSignalError() instead")
    void listGuildMembersSignalE(QList<OAIGuildMemberResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildMembersSignalError(QList<OAIGuildMemberResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildRolesSignalError() instead")
    void listGuildRolesSignalE(QList<OAIGuildRoleResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildRolesSignalError(QList<OAIGuildRoleResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildScheduledEventUsersSignalError() instead")
    void listGuildScheduledEventUsersSignalE(QList<OAIScheduledEventUserResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildScheduledEventUsersSignalError(QList<OAIScheduledEventUserResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildScheduledEventsSignalError() instead")
    void listGuildScheduledEventsSignalE(QList<OAIList_guild_scheduled_events_200_response_inner> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildScheduledEventsSignalError(QList<OAIList_guild_scheduled_events_200_response_inner> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildSoundboardSoundsSignalError() instead")
    void listGuildSoundboardSoundsSignalE(OAIListGuildSoundboardSoundsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildSoundboardSoundsSignalError(OAIListGuildSoundboardSoundsResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildStickersSignalError() instead")
    void listGuildStickersSignalE(QList<OAIGuildStickerResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildStickersSignalError(QList<OAIGuildStickerResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildTemplatesSignalError() instead")
    void listGuildTemplatesSignalE(QList<OAIGuildTemplateResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildTemplatesSignalError(QList<OAIGuildTemplateResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildVoiceRegionsSignalError() instead")
    void listGuildVoiceRegionsSignalE(QList<OAIVoiceRegionResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildVoiceRegionsSignalError(QList<OAIVoiceRegionResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listMessageReactionsByEmojiSignalError() instead")
    void listMessageReactionsByEmojiSignalE(QList<OAIUserResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listMessageReactionsByEmojiSignalError(QList<OAIUserResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listMessagesSignalError() instead")
    void listMessagesSignalE(QList<OAIMessageResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listMessagesSignalError(QList<OAIMessageResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listMyConnectionsSignalError() instead")
    void listMyConnectionsSignalE(QList<OAIConnectedAccountResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listMyConnectionsSignalError(QList<OAIConnectedAccountResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listMyGuildsSignalError() instead")
    void listMyGuildsSignalE(QList<OAIMyGuildResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listMyGuildsSignalError(QList<OAIMyGuildResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listMyPrivateArchivedThreadsSignalError() instead")
    void listMyPrivateArchivedThreadsSignalE(OAIThreadsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listMyPrivateArchivedThreadsSignalError(OAIThreadsResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listPinsSignalError() instead")
    void listPinsSignalE(OAIPinnedMessagesResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listPinsSignalError(OAIPinnedMessagesResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listPrivateArchivedThreadsSignalError() instead")
    void listPrivateArchivedThreadsSignalE(OAIThreadsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listPrivateArchivedThreadsSignalError(OAIThreadsResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listPublicArchivedThreadsSignalError() instead")
    void listPublicArchivedThreadsSignalE(OAIThreadsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listPublicArchivedThreadsSignalError(OAIThreadsResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listStickerPacksSignalError() instead")
    void listStickerPacksSignalE(OAIStickerPackCollectionResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listStickerPacksSignalError(OAIStickerPackCollectionResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listThreadMembersSignalError() instead")
    void listThreadMembersSignalE(QList<OAIThreadMemberResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listThreadMembersSignalError(QList<OAIThreadMemberResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listVoiceRegionsSignalError() instead")
    void listVoiceRegionsSignalE(QList<OAIVoiceRegionResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listVoiceRegionsSignalError(QList<OAIVoiceRegionResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use partnerSdkTokenSignalError() instead")
    void partnerSdkTokenSignalE(OAIProvisionalTokenResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void partnerSdkTokenSignalError(OAIProvisionalTokenResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use partnerSdkUnmergeProvisionalAccountSignalError() instead")
    void partnerSdkUnmergeProvisionalAccountSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void partnerSdkUnmergeProvisionalAccountSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use pollExpireSignalError() instead")
    void pollExpireSignalE(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void pollExpireSignalError(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use previewPruneGuildSignalError() instead")
    void previewPruneGuildSignalE(OAIGuildPruneResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void previewPruneGuildSignalError(OAIGuildPruneResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use pruneGuildSignalError() instead")
    void pruneGuildSignalE(OAIGuildPruneResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void pruneGuildSignalError(OAIGuildPruneResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use putGuildsOnboardingSignalError() instead")
    void putGuildsOnboardingSignalE(OAIGuildOnboardingResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void putGuildsOnboardingSignalError(OAIGuildOnboardingResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use searchGuildMembersSignalError() instead")
    void searchGuildMembersSignalE(QList<OAIGuildMemberResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void searchGuildMembersSignalError(QList<OAIGuildMemberResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendSoundboardSoundSignalError() instead")
    void sendSoundboardSoundSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void sendSoundboardSoundSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChannelPermissionOverwriteSignalError() instead")
    void setChannelPermissionOverwriteSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void setChannelPermissionOverwriteSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setGuildApplicationCommandPermissionsSignalError() instead")
    void setGuildApplicationCommandPermissionsSignalE(OAICommandPermissionsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setGuildApplicationCommandPermissionsSignalError(OAICommandPermissionsResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setGuildMfaLevelSignalError() instead")
    void setGuildMfaLevelSignalE(OAIGuildMFALevelResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setGuildMfaLevelSignalError(OAIGuildMFALevelResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use syncGuildTemplateSignalError() instead")
    void syncGuildTemplateSignalE(OAIGuildTemplateResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void syncGuildTemplateSignalError(OAIGuildTemplateResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use threadSearchSignalError() instead")
    void threadSearchSignalE(OAIThreadSearchResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void threadSearchSignalError(OAIThreadSearchResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use triggerTypingIndicatorSignalError() instead")
    void triggerTypingIndicatorSignalE(OAIObject summary, QNetworkReply::NetworkError error_type, QString error_str);
    void triggerTypingIndicatorSignalError(OAIObject summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unbanUserFromGuildSignalError() instead")
    void unbanUserFromGuildSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void unbanUserFromGuildSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateApplicationSignalError() instead")
    void updateApplicationSignalE(OAIPrivateApplicationResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateApplicationSignalError(OAIPrivateApplicationResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateApplicationCommandSignalError() instead")
    void updateApplicationCommandSignalE(OAIApplicationCommandResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateApplicationCommandSignalError(OAIApplicationCommandResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateApplicationEmojiSignalError() instead")
    void updateApplicationEmojiSignalE(OAIEmojiResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateApplicationEmojiSignalError(OAIEmojiResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateApplicationRoleConnectionsMetadataSignalError() instead")
    void updateApplicationRoleConnectionsMetadataSignalE(QList<OAIApplicationRoleConnectionsMetadataItemResponse> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateApplicationRoleConnectionsMetadataSignalError(QList<OAIApplicationRoleConnectionsMetadataItemResponse> summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateApplicationUserRoleConnectionSignalError() instead")
    void updateApplicationUserRoleConnectionSignalE(OAIApplicationUserRoleConnectionResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateApplicationUserRoleConnectionSignalError(OAIApplicationUserRoleConnectionResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateAutoModerationRuleSignalError() instead")
    void updateAutoModerationRuleSignalE(OAICreate_auto_moderation_rule_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateAutoModerationRuleSignalError(OAICreate_auto_moderation_rule_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateChannelSignalError() instead")
    void updateChannelSignalE(OAIGet_channel_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateChannelSignalError(OAIGet_channel_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildSignalError() instead")
    void updateGuildSignalE(OAIGuildResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildSignalError(OAIGuildResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildApplicationCommandSignalError() instead")
    void updateGuildApplicationCommandSignalE(OAIApplicationCommandResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildApplicationCommandSignalError(OAIApplicationCommandResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildEmojiSignalError() instead")
    void updateGuildEmojiSignalE(OAIEmojiResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildEmojiSignalError(OAIEmojiResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildMemberSignalError() instead")
    void updateGuildMemberSignalE(OAIGuildMemberResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildMemberSignalError(OAIGuildMemberResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildRoleSignalError() instead")
    void updateGuildRoleSignalE(OAIGuildRoleResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildRoleSignalError(OAIGuildRoleResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildScheduledEventSignalError() instead")
    void updateGuildScheduledEventSignalE(OAIList_guild_scheduled_events_200_response_inner summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildScheduledEventSignalError(OAIList_guild_scheduled_events_200_response_inner summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildSoundboardSoundSignalError() instead")
    void updateGuildSoundboardSoundSignalE(OAISoundboardSoundResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildSoundboardSoundSignalError(OAISoundboardSoundResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildStickerSignalError() instead")
    void updateGuildStickerSignalE(OAIGuildStickerResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildStickerSignalError(OAIGuildStickerResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildTemplateSignalError() instead")
    void updateGuildTemplateSignalE(OAIGuildTemplateResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildTemplateSignalError(OAIGuildTemplateResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildWelcomeScreenSignalError() instead")
    void updateGuildWelcomeScreenSignalE(OAIGuildWelcomeScreenResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildWelcomeScreenSignalError(OAIGuildWelcomeScreenResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildWidgetSettingsSignalError() instead")
    void updateGuildWidgetSettingsSignalE(OAIWidgetSettingsResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildWidgetSettingsSignalError(OAIWidgetSettingsResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateMessageSignalError() instead")
    void updateMessageSignalE(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateMessageSignalError(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateMyApplicationSignalError() instead")
    void updateMyApplicationSignalE(OAIPrivateApplicationResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateMyApplicationSignalError(OAIPrivateApplicationResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateMyGuildMemberSignalError() instead")
    void updateMyGuildMemberSignalE(OAIPrivateGuildMemberResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateMyGuildMemberSignalError(OAIPrivateGuildMemberResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateMyUserSignalError() instead")
    void updateMyUserSignalE(OAIUserPIIResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateMyUserSignalError(OAIUserPIIResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateOriginalWebhookMessageSignalError() instead")
    void updateOriginalWebhookMessageSignalE(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateOriginalWebhookMessageSignalError(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateSelfVoiceStateSignalError() instead")
    void updateSelfVoiceStateSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void updateSelfVoiceStateSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateStageInstanceSignalError() instead")
    void updateStageInstanceSignalE(OAIStageInstanceResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateStageInstanceSignalError(OAIStageInstanceResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateVoiceStateSignalError() instead")
    void updateVoiceStateSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void updateVoiceStateSignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateWebhookSignalError() instead")
    void updateWebhookSignalE(OAIList_channel_webhooks_200_response_inner summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateWebhookSignalError(OAIList_channel_webhooks_200_response_inner summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateWebhookByTokenSignalError() instead")
    void updateWebhookByTokenSignalE(OAIList_channel_webhooks_200_response_inner summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateWebhookByTokenSignalError(OAIList_channel_webhooks_200_response_inner summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateWebhookMessageSignalError() instead")
    void updateWebhookMessageSignalE(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateWebhookMessageSignalError(OAIMessageResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use uploadApplicationAttachmentSignalError() instead")
    void uploadApplicationAttachmentSignalE(OAIActivitiesAttachmentResponse summary, QNetworkReply::NetworkError error_type, QString error_str);
    void uploadApplicationAttachmentSignalError(OAIActivitiesAttachmentResponse summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use addGroupDmUserSignalErrorFull() instead")
    void addGroupDmUserSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void addGroupDmUserSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use addGuildMemberSignalErrorFull() instead")
    void addGuildMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void addGuildMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use addGuildMemberRoleSignalErrorFull() instead")
    void addGuildMemberRoleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void addGuildMemberRoleSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use addLobbyMemberSignalErrorFull() instead")
    void addLobbyMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void addLobbyMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use addMyMessageReactionSignalErrorFull() instead")
    void addMyMessageReactionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void addMyMessageReactionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use addThreadMemberSignalErrorFull() instead")
    void addThreadMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void addThreadMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use applicationsGetActivityInstanceSignalErrorFull() instead")
    void applicationsGetActivityInstanceSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void applicationsGetActivityInstanceSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use banUserFromGuildSignalErrorFull() instead")
    void banUserFromGuildSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void banUserFromGuildSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkBanUsersFromGuildSignalErrorFull() instead")
    void bulkBanUsersFromGuildSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void bulkBanUsersFromGuildSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkDeleteMessagesSignalErrorFull() instead")
    void bulkDeleteMessagesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void bulkDeleteMessagesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkSetApplicationCommandsSignalErrorFull() instead")
    void bulkSetApplicationCommandsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void bulkSetApplicationCommandsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkSetGuildApplicationCommandsSignalErrorFull() instead")
    void bulkSetGuildApplicationCommandsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void bulkSetGuildApplicationCommandsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkUpdateGuildChannelsSignalErrorFull() instead")
    void bulkUpdateGuildChannelsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void bulkUpdateGuildChannelsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkUpdateGuildRolesSignalErrorFull() instead")
    void bulkUpdateGuildRolesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void bulkUpdateGuildRolesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use bulkUpdateLobbyMembersSignalErrorFull() instead")
    void bulkUpdateLobbyMembersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void bulkUpdateLobbyMembersSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use consumeEntitlementSignalErrorFull() instead")
    void consumeEntitlementSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void consumeEntitlementSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createApplicationCommandSignalErrorFull() instead")
    void createApplicationCommandSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createApplicationCommandSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createApplicationEmojiSignalErrorFull() instead")
    void createApplicationEmojiSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createApplicationEmojiSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createAutoModerationRuleSignalErrorFull() instead")
    void createAutoModerationRuleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createAutoModerationRuleSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createChannelInviteSignalErrorFull() instead")
    void createChannelInviteSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createChannelInviteSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createDmSignalErrorFull() instead")
    void createDmSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createDmSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createEntitlementSignalErrorFull() instead")
    void createEntitlementSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createEntitlementSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildSignalErrorFull() instead")
    void createGuildSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildApplicationCommandSignalErrorFull() instead")
    void createGuildApplicationCommandSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildApplicationCommandSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildChannelSignalErrorFull() instead")
    void createGuildChannelSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildChannelSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildEmojiSignalErrorFull() instead")
    void createGuildEmojiSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildEmojiSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildFromTemplateSignalErrorFull() instead")
    void createGuildFromTemplateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildFromTemplateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildRoleSignalErrorFull() instead")
    void createGuildRoleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildRoleSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildScheduledEventSignalErrorFull() instead")
    void createGuildScheduledEventSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildScheduledEventSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildSoundboardSoundSignalErrorFull() instead")
    void createGuildSoundboardSoundSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildSoundboardSoundSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildStickerSignalErrorFull() instead")
    void createGuildStickerSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildStickerSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createGuildTemplateSignalErrorFull() instead")
    void createGuildTemplateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createGuildTemplateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createInteractionResponseSignalErrorFull() instead")
    void createInteractionResponseSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createInteractionResponseSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createLobbySignalErrorFull() instead")
    void createLobbySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createLobbySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createLobbyMessageSignalErrorFull() instead")
    void createLobbyMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createLobbyMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createMessageSignalErrorFull() instead")
    void createMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createOrJoinLobbySignalErrorFull() instead")
    void createOrJoinLobbySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createOrJoinLobbySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createPinSignalErrorFull() instead")
    void createPinSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createPinSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createStageInstanceSignalErrorFull() instead")
    void createStageInstanceSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createStageInstanceSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createThreadSignalErrorFull() instead")
    void createThreadSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createThreadSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createThreadFromMessageSignalErrorFull() instead")
    void createThreadFromMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createThreadFromMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createWebhookSignalErrorFull() instead")
    void createWebhookSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createWebhookSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use crosspostMessageSignalErrorFull() instead")
    void crosspostMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void crosspostMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteAllMessageReactionsSignalErrorFull() instead")
    void deleteAllMessageReactionsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteAllMessageReactionsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteAllMessageReactionsByEmojiSignalErrorFull() instead")
    void deleteAllMessageReactionsByEmojiSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteAllMessageReactionsByEmojiSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteApplicationCommandSignalErrorFull() instead")
    void deleteApplicationCommandSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteApplicationCommandSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteApplicationEmojiSignalErrorFull() instead")
    void deleteApplicationEmojiSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteApplicationEmojiSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteApplicationUserRoleConnectionSignalErrorFull() instead")
    void deleteApplicationUserRoleConnectionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteApplicationUserRoleConnectionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteAutoModerationRuleSignalErrorFull() instead")
    void deleteAutoModerationRuleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteAutoModerationRuleSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteChannelSignalErrorFull() instead")
    void deleteChannelSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteChannelSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteChannelPermissionOverwriteSignalErrorFull() instead")
    void deleteChannelPermissionOverwriteSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteChannelPermissionOverwriteSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteEntitlementSignalErrorFull() instead")
    void deleteEntitlementSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteEntitlementSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGroupDmUserSignalErrorFull() instead")
    void deleteGroupDmUserSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGroupDmUserSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildSignalErrorFull() instead")
    void deleteGuildSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildApplicationCommandSignalErrorFull() instead")
    void deleteGuildApplicationCommandSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildApplicationCommandSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildEmojiSignalErrorFull() instead")
    void deleteGuildEmojiSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildEmojiSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildIntegrationSignalErrorFull() instead")
    void deleteGuildIntegrationSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildIntegrationSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildMemberSignalErrorFull() instead")
    void deleteGuildMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildMemberRoleSignalErrorFull() instead")
    void deleteGuildMemberRoleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildMemberRoleSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildRoleSignalErrorFull() instead")
    void deleteGuildRoleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildRoleSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildScheduledEventSignalErrorFull() instead")
    void deleteGuildScheduledEventSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildScheduledEventSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildSoundboardSoundSignalErrorFull() instead")
    void deleteGuildSoundboardSoundSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildSoundboardSoundSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildStickerSignalErrorFull() instead")
    void deleteGuildStickerSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildStickerSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteGuildTemplateSignalErrorFull() instead")
    void deleteGuildTemplateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGuildTemplateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteLobbyMemberSignalErrorFull() instead")
    void deleteLobbyMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteLobbyMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteMessageSignalErrorFull() instead")
    void deleteMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteMyMessageReactionSignalErrorFull() instead")
    void deleteMyMessageReactionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteMyMessageReactionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteOriginalWebhookMessageSignalErrorFull() instead")
    void deleteOriginalWebhookMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteOriginalWebhookMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deletePinSignalErrorFull() instead")
    void deletePinSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deletePinSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteStageInstanceSignalErrorFull() instead")
    void deleteStageInstanceSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteStageInstanceSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteThreadMemberSignalErrorFull() instead")
    void deleteThreadMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteThreadMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteUserMessageReactionSignalErrorFull() instead")
    void deleteUserMessageReactionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteUserMessageReactionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteWebhookSignalErrorFull() instead")
    void deleteWebhookSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteWebhookSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteWebhookByTokenSignalErrorFull() instead")
    void deleteWebhookByTokenSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteWebhookByTokenSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteWebhookMessageSignalErrorFull() instead")
    void deleteWebhookMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteWebhookMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deprecatedCreatePinSignalErrorFull() instead")
    void deprecatedCreatePinSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deprecatedCreatePinSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deprecatedDeletePinSignalErrorFull() instead")
    void deprecatedDeletePinSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deprecatedDeletePinSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deprecatedListPinsSignalErrorFull() instead")
    void deprecatedListPinsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deprecatedListPinsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editLobbySignalErrorFull() instead")
    void editLobbySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void editLobbySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editLobbyChannelLinkSignalErrorFull() instead")
    void editLobbyChannelLinkSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void editLobbyChannelLinkSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use executeGithubCompatibleWebhookSignalErrorFull() instead")
    void executeGithubCompatibleWebhookSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void executeGithubCompatibleWebhookSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use executeSlackCompatibleWebhookSignalErrorFull() instead")
    void executeSlackCompatibleWebhookSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void executeSlackCompatibleWebhookSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use executeWebhookSignalErrorFull() instead")
    void executeWebhookSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void executeWebhookSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use followChannelSignalErrorFull() instead")
    void followChannelSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void followChannelSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getActiveGuildThreadsSignalErrorFull() instead")
    void getActiveGuildThreadsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getActiveGuildThreadsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getAnswerVotersSignalErrorFull() instead")
    void getAnswerVotersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getAnswerVotersSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getApplicationSignalErrorFull() instead")
    void getApplicationSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getApplicationSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getApplicationCommandSignalErrorFull() instead")
    void getApplicationCommandSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getApplicationCommandSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getApplicationEmojiSignalErrorFull() instead")
    void getApplicationEmojiSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getApplicationEmojiSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getApplicationRoleConnectionsMetadataSignalErrorFull() instead")
    void getApplicationRoleConnectionsMetadataSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getApplicationRoleConnectionsMetadataSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getApplicationUserRoleConnectionSignalErrorFull() instead")
    void getApplicationUserRoleConnectionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getApplicationUserRoleConnectionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getAutoModerationRuleSignalErrorFull() instead")
    void getAutoModerationRuleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getAutoModerationRuleSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getBotGatewaySignalErrorFull() instead")
    void getBotGatewaySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getBotGatewaySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getChannelSignalErrorFull() instead")
    void getChannelSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getChannelSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getEntitlementSignalErrorFull() instead")
    void getEntitlementSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getEntitlementSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getEntitlementsSignalErrorFull() instead")
    void getEntitlementsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getEntitlementsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGatewaySignalErrorFull() instead")
    void getGatewaySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGatewaySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildSignalErrorFull() instead")
    void getGuildSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildApplicationCommandSignalErrorFull() instead")
    void getGuildApplicationCommandSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildApplicationCommandSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildApplicationCommandPermissionsSignalErrorFull() instead")
    void getGuildApplicationCommandPermissionsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildApplicationCommandPermissionsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildBanSignalErrorFull() instead")
    void getGuildBanSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildBanSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildEmojiSignalErrorFull() instead")
    void getGuildEmojiSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildEmojiSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildMemberSignalErrorFull() instead")
    void getGuildMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildNewMemberWelcomeSignalErrorFull() instead")
    void getGuildNewMemberWelcomeSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildNewMemberWelcomeSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildPreviewSignalErrorFull() instead")
    void getGuildPreviewSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildPreviewSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildRoleSignalErrorFull() instead")
    void getGuildRoleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildRoleSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildScheduledEventSignalErrorFull() instead")
    void getGuildScheduledEventSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildScheduledEventSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildSoundboardSoundSignalErrorFull() instead")
    void getGuildSoundboardSoundSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildSoundboardSoundSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildStickerSignalErrorFull() instead")
    void getGuildStickerSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildStickerSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildTemplateSignalErrorFull() instead")
    void getGuildTemplateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildTemplateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildVanityUrlSignalErrorFull() instead")
    void getGuildVanityUrlSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildVanityUrlSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildWebhooksSignalErrorFull() instead")
    void getGuildWebhooksSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildWebhooksSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildWelcomeScreenSignalErrorFull() instead")
    void getGuildWelcomeScreenSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildWelcomeScreenSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildWidgetSignalErrorFull() instead")
    void getGuildWidgetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildWidgetSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildWidgetPngSignalErrorFull() instead")
    void getGuildWidgetPngSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildWidgetPngSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildWidgetSettingsSignalErrorFull() instead")
    void getGuildWidgetSettingsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildWidgetSettingsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGuildsOnboardingSignalErrorFull() instead")
    void getGuildsOnboardingSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGuildsOnboardingSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getLobbySignalErrorFull() instead")
    void getLobbySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getLobbySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getLobbyMessagesSignalErrorFull() instead")
    void getLobbyMessagesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getLobbyMessagesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMessageSignalErrorFull() instead")
    void getMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyApplicationSignalErrorFull() instead")
    void getMyApplicationSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyApplicationSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyGuildMemberSignalErrorFull() instead")
    void getMyGuildMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyGuildMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyOauth2ApplicationSignalErrorFull() instead")
    void getMyOauth2ApplicationSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyOauth2ApplicationSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyOauth2AuthorizationSignalErrorFull() instead")
    void getMyOauth2AuthorizationSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyOauth2AuthorizationSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyUserSignalErrorFull() instead")
    void getMyUserSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyUserSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getOpenidConnectUserinfoSignalErrorFull() instead")
    void getOpenidConnectUserinfoSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOpenidConnectUserinfoSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getOriginalWebhookMessageSignalErrorFull() instead")
    void getOriginalWebhookMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOriginalWebhookMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getPublicKeysSignalErrorFull() instead")
    void getPublicKeysSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getPublicKeysSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getSelfVoiceStateSignalErrorFull() instead")
    void getSelfVoiceStateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getSelfVoiceStateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getSoundboardDefaultSoundsSignalErrorFull() instead")
    void getSoundboardDefaultSoundsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getSoundboardDefaultSoundsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getStageInstanceSignalErrorFull() instead")
    void getStageInstanceSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getStageInstanceSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getStickerSignalErrorFull() instead")
    void getStickerSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getStickerSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getStickerPackSignalErrorFull() instead")
    void getStickerPackSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getStickerPackSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getThreadMemberSignalErrorFull() instead")
    void getThreadMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getThreadMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getUserSignalErrorFull() instead")
    void getUserSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getUserSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getVoiceStateSignalErrorFull() instead")
    void getVoiceStateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getVoiceStateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getWebhookSignalErrorFull() instead")
    void getWebhookSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getWebhookSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getWebhookByTokenSignalErrorFull() instead")
    void getWebhookByTokenSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getWebhookByTokenSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getWebhookMessageSignalErrorFull() instead")
    void getWebhookMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getWebhookMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inviteResolveSignalErrorFull() instead")
    void inviteResolveSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inviteResolveSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inviteRevokeSignalErrorFull() instead")
    void inviteRevokeSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inviteRevokeSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use joinThreadSignalErrorFull() instead")
    void joinThreadSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void joinThreadSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use leaveGuildSignalErrorFull() instead")
    void leaveGuildSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void leaveGuildSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use leaveLobbySignalErrorFull() instead")
    void leaveLobbySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void leaveLobbySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use leaveThreadSignalErrorFull() instead")
    void leaveThreadSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void leaveThreadSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listApplicationCommandsSignalErrorFull() instead")
    void listApplicationCommandsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listApplicationCommandsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listApplicationEmojisSignalErrorFull() instead")
    void listApplicationEmojisSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listApplicationEmojisSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listAutoModerationRulesSignalErrorFull() instead")
    void listAutoModerationRulesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listAutoModerationRulesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listChannelInvitesSignalErrorFull() instead")
    void listChannelInvitesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listChannelInvitesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listChannelWebhooksSignalErrorFull() instead")
    void listChannelWebhooksSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listChannelWebhooksSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildApplicationCommandPermissionsSignalErrorFull() instead")
    void listGuildApplicationCommandPermissionsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildApplicationCommandPermissionsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildApplicationCommandsSignalErrorFull() instead")
    void listGuildApplicationCommandsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildApplicationCommandsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildAuditLogEntriesSignalErrorFull() instead")
    void listGuildAuditLogEntriesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildAuditLogEntriesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildBansSignalErrorFull() instead")
    void listGuildBansSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildBansSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildChannelsSignalErrorFull() instead")
    void listGuildChannelsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildChannelsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildEmojisSignalErrorFull() instead")
    void listGuildEmojisSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildEmojisSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildIntegrationsSignalErrorFull() instead")
    void listGuildIntegrationsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildIntegrationsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildInvitesSignalErrorFull() instead")
    void listGuildInvitesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildInvitesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildMembersSignalErrorFull() instead")
    void listGuildMembersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildMembersSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildRolesSignalErrorFull() instead")
    void listGuildRolesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildRolesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildScheduledEventUsersSignalErrorFull() instead")
    void listGuildScheduledEventUsersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildScheduledEventUsersSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildScheduledEventsSignalErrorFull() instead")
    void listGuildScheduledEventsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildScheduledEventsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildSoundboardSoundsSignalErrorFull() instead")
    void listGuildSoundboardSoundsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildSoundboardSoundsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildStickersSignalErrorFull() instead")
    void listGuildStickersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildStickersSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildTemplatesSignalErrorFull() instead")
    void listGuildTemplatesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildTemplatesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listGuildVoiceRegionsSignalErrorFull() instead")
    void listGuildVoiceRegionsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listGuildVoiceRegionsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listMessageReactionsByEmojiSignalErrorFull() instead")
    void listMessageReactionsByEmojiSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listMessageReactionsByEmojiSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listMessagesSignalErrorFull() instead")
    void listMessagesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listMessagesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listMyConnectionsSignalErrorFull() instead")
    void listMyConnectionsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listMyConnectionsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listMyGuildsSignalErrorFull() instead")
    void listMyGuildsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listMyGuildsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listMyPrivateArchivedThreadsSignalErrorFull() instead")
    void listMyPrivateArchivedThreadsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listMyPrivateArchivedThreadsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listPinsSignalErrorFull() instead")
    void listPinsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listPinsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listPrivateArchivedThreadsSignalErrorFull() instead")
    void listPrivateArchivedThreadsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listPrivateArchivedThreadsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listPublicArchivedThreadsSignalErrorFull() instead")
    void listPublicArchivedThreadsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listPublicArchivedThreadsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listStickerPacksSignalErrorFull() instead")
    void listStickerPacksSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listStickerPacksSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listThreadMembersSignalErrorFull() instead")
    void listThreadMembersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listThreadMembersSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use listVoiceRegionsSignalErrorFull() instead")
    void listVoiceRegionsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listVoiceRegionsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use partnerSdkTokenSignalErrorFull() instead")
    void partnerSdkTokenSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void partnerSdkTokenSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use partnerSdkUnmergeProvisionalAccountSignalErrorFull() instead")
    void partnerSdkUnmergeProvisionalAccountSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void partnerSdkUnmergeProvisionalAccountSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use pollExpireSignalErrorFull() instead")
    void pollExpireSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void pollExpireSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use previewPruneGuildSignalErrorFull() instead")
    void previewPruneGuildSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void previewPruneGuildSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use pruneGuildSignalErrorFull() instead")
    void pruneGuildSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void pruneGuildSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use putGuildsOnboardingSignalErrorFull() instead")
    void putGuildsOnboardingSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void putGuildsOnboardingSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use searchGuildMembersSignalErrorFull() instead")
    void searchGuildMembersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void searchGuildMembersSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendSoundboardSoundSignalErrorFull() instead")
    void sendSoundboardSoundSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendSoundboardSoundSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChannelPermissionOverwriteSignalErrorFull() instead")
    void setChannelPermissionOverwriteSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setChannelPermissionOverwriteSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setGuildApplicationCommandPermissionsSignalErrorFull() instead")
    void setGuildApplicationCommandPermissionsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setGuildApplicationCommandPermissionsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setGuildMfaLevelSignalErrorFull() instead")
    void setGuildMfaLevelSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setGuildMfaLevelSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use syncGuildTemplateSignalErrorFull() instead")
    void syncGuildTemplateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void syncGuildTemplateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use threadSearchSignalErrorFull() instead")
    void threadSearchSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void threadSearchSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use triggerTypingIndicatorSignalErrorFull() instead")
    void triggerTypingIndicatorSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void triggerTypingIndicatorSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unbanUserFromGuildSignalErrorFull() instead")
    void unbanUserFromGuildSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unbanUserFromGuildSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateApplicationSignalErrorFull() instead")
    void updateApplicationSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateApplicationSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateApplicationCommandSignalErrorFull() instead")
    void updateApplicationCommandSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateApplicationCommandSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateApplicationEmojiSignalErrorFull() instead")
    void updateApplicationEmojiSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateApplicationEmojiSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateApplicationRoleConnectionsMetadataSignalErrorFull() instead")
    void updateApplicationRoleConnectionsMetadataSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateApplicationRoleConnectionsMetadataSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateApplicationUserRoleConnectionSignalErrorFull() instead")
    void updateApplicationUserRoleConnectionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateApplicationUserRoleConnectionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateAutoModerationRuleSignalErrorFull() instead")
    void updateAutoModerationRuleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateAutoModerationRuleSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateChannelSignalErrorFull() instead")
    void updateChannelSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateChannelSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildSignalErrorFull() instead")
    void updateGuildSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildApplicationCommandSignalErrorFull() instead")
    void updateGuildApplicationCommandSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildApplicationCommandSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildEmojiSignalErrorFull() instead")
    void updateGuildEmojiSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildEmojiSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildMemberSignalErrorFull() instead")
    void updateGuildMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildRoleSignalErrorFull() instead")
    void updateGuildRoleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildRoleSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildScheduledEventSignalErrorFull() instead")
    void updateGuildScheduledEventSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildScheduledEventSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildSoundboardSoundSignalErrorFull() instead")
    void updateGuildSoundboardSoundSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildSoundboardSoundSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildStickerSignalErrorFull() instead")
    void updateGuildStickerSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildStickerSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildTemplateSignalErrorFull() instead")
    void updateGuildTemplateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildTemplateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildWelcomeScreenSignalErrorFull() instead")
    void updateGuildWelcomeScreenSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildWelcomeScreenSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateGuildWidgetSettingsSignalErrorFull() instead")
    void updateGuildWidgetSettingsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGuildWidgetSettingsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateMessageSignalErrorFull() instead")
    void updateMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateMyApplicationSignalErrorFull() instead")
    void updateMyApplicationSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateMyApplicationSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateMyGuildMemberSignalErrorFull() instead")
    void updateMyGuildMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateMyGuildMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateMyUserSignalErrorFull() instead")
    void updateMyUserSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateMyUserSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateOriginalWebhookMessageSignalErrorFull() instead")
    void updateOriginalWebhookMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateOriginalWebhookMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateSelfVoiceStateSignalErrorFull() instead")
    void updateSelfVoiceStateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateSelfVoiceStateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateStageInstanceSignalErrorFull() instead")
    void updateStageInstanceSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateStageInstanceSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateVoiceStateSignalErrorFull() instead")
    void updateVoiceStateSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateVoiceStateSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateWebhookSignalErrorFull() instead")
    void updateWebhookSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateWebhookSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateWebhookByTokenSignalErrorFull() instead")
    void updateWebhookByTokenSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateWebhookByTokenSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use updateWebhookMessageSignalErrorFull() instead")
    void updateWebhookMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateWebhookMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use uploadApplicationAttachmentSignalErrorFull() instead")
    void uploadApplicationAttachmentSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void uploadApplicationAttachmentSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace dc_rest
#endif
