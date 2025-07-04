cmake_minimum_required(VERSION 3.5)

project(dc_rest)

set(CMAKE_AUTOMOC ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Network Gui)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network Gui)

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

add_library(${PROJECT_NAME}
  OAIAccountResponse.h
  OAIActionRowComponentForMessageRequest.h
  OAIActionRowComponentForMessageRequest_components_inner.h
  OAIActionRowComponentForModalRequest.h
  OAIActionRowComponentResponse.h
  OAIActionRowComponentResponse_components_inner.h
  OAIActivitiesAttachmentResponse.h
  OAIAdd_group_dm_user_201_response.h
  OAIAdd_group_dm_user_request.h
  OAIAdd_guild_member_request.h
  OAIAdd_lobby_member_request.h
  OAIApplicationCommandAttachmentOption.h
  OAIApplicationCommandAttachmentOptionResponse.h
  OAIApplicationCommandAutocompleteCallbackRequest.h
  OAIApplicationCommandAutocompleteCallbackRequest_data.h
  OAIApplicationCommandBooleanOption.h
  OAIApplicationCommandBooleanOptionResponse.h
  OAIApplicationCommandChannelOption.h
  OAIApplicationCommandChannelOptionResponse.h
  OAIApplicationCommandCreateRequest.h
  OAIApplicationCommandCreateRequest_options_inner.h
  OAIApplicationCommandIntegerOption.h
  OAIApplicationCommandIntegerOptionResponse.h
  OAIApplicationCommandInteractionMetadataResponse.h
  OAIApplicationCommandMentionableOption.h
  OAIApplicationCommandMentionableOptionResponse.h
  OAIApplicationCommandNumberOption.h
  OAIApplicationCommandNumberOptionResponse.h
  OAIApplicationCommandOptionIntegerChoice.h
  OAIApplicationCommandOptionIntegerChoiceResponse.h
  OAIApplicationCommandOptionNumberChoice.h
  OAIApplicationCommandOptionNumberChoiceResponse.h
  OAIApplicationCommandOptionStringChoice.h
  OAIApplicationCommandOptionStringChoiceResponse.h
  OAIApplicationCommandPatchRequestPartial.h
  OAIApplicationCommandPermission.h
  OAIApplicationCommandResponse.h
  OAIApplicationCommandResponse_options_inner.h
  OAIApplicationCommandRoleOption.h
  OAIApplicationCommandRoleOptionResponse.h
  OAIApplicationCommandStringOption.h
  OAIApplicationCommandStringOptionResponse.h
  OAIApplicationCommandSubcommandGroupOption.h
  OAIApplicationCommandSubcommandGroupOptionResponse.h
  OAIApplicationCommandSubcommandOption.h
  OAIApplicationCommandSubcommandOptionResponse.h
  OAIApplicationCommandSubcommandOptionResponse_options_inner.h
  OAIApplicationCommandSubcommandOption_options_inner.h
  OAIApplicationCommandUpdateRequest.h
  OAIApplicationCommandUserOption.h
  OAIApplicationCommandUserOptionResponse.h
  OAIApplicationFormPartial.h
  OAIApplicationFormPartial_description.h
  OAIApplicationFormPartial_integration_types_config_value.h
  OAIApplicationIncomingWebhookResponse.h
  OAIApplicationIntegrationTypeConfiguration.h
  OAIApplicationIntegrationTypeConfigurationResponse.h
  OAIApplicationOAuth2InstallParams.h
  OAIApplicationOAuth2InstallParamsResponse.h
  OAIApplicationResponse.h
  OAIApplicationRoleConnectionsMetadataItemRequest.h
  OAIApplicationRoleConnectionsMetadataItemResponse.h
  OAIApplicationUserRoleConnectionResponse.h
  OAIAttachmentResponse.h
  OAIAuditLogEntryResponse.h
  OAIAuditLogObjectChangeResponse.h
  OAIBan_user_from_guild_request.h
  OAIBaseCreateMessageCreateRequest.h
  OAIBaseCreateMessageCreateRequest_components_inner.h
  OAIBasicApplicationResponse.h
  OAIBasicMessageResponse.h
  OAIBasicMessageResponse_components_inner.h
  OAIBasicMessageResponse_interaction_metadata.h
  OAIBasicMessageResponse_nonce.h
  OAIBlockMessageAction.h
  OAIBlockMessageActionMetadata.h
  OAIBlockMessageActionMetadataResponse.h
  OAIBlockMessageActionResponse.h
  OAIBotAccountPatchRequest.h
  OAIBulkBanUsersResponse.h
  OAIBulkLobbyMemberRequest.h
  OAIBulk_ban_users_from_guild_request.h
  OAIBulk_delete_messages_request.h
  OAIBulk_update_guild_channels_request_inner.h
  OAIBulk_update_guild_roles_request_inner.h
  OAIButtonComponentForMessageRequest.h
  OAIButtonComponentResponse.h
  OAIChannelFollowerResponse.h
  OAIChannelFollowerWebhookResponse.h
  OAIChannelPermissionOverwriteRequest.h
  OAIChannelPermissionOverwriteResponse.h
  OAIChannelSelectComponentForMessageRequest.h
  OAIChannelSelectComponentResponse.h
  OAIChannelSelectDefaultValue.h
  OAIChannelSelectDefaultValueResponse.h
  OAICommandPermissionResponse.h
  OAICommandPermissionsResponse.h
  OAIComponentEmojiForMessageRequest.h
  OAIComponentEmojiResponse.h
  OAIConnectedAccountGuildResponse.h
  OAIConnectedAccountIntegrationResponse.h
  OAIConnectedAccountResponse.h
  OAIContainerComponentForMessageRequest.h
  OAIContainerComponentForMessageRequest_components_inner.h
  OAIContainerComponentResponse.h
  OAIContainerComponentResponse_components_inner.h
  OAICreateEntitlementRequestData.h
  OAICreateForumThreadRequest.h
  OAICreateGroupDMInviteRequest.h
  OAICreateGuildChannelRequest.h
  OAICreateGuildInviteRequest.h
  OAICreateGuildRequestChannelItem.h
  OAICreateGuildRequestRoleItem.h
  OAICreateMessageInteractionCallbackRequest.h
  OAICreateMessageInteractionCallbackResponse.h
  OAICreateOrUpdateThreadTagRequest.h
  OAICreatePrivateChannelRequest.h
  OAICreateTextThreadWithMessageRequest.h
  OAICreateTextThreadWithoutMessageRequest.h
  OAICreate_application_emoji_request.h
  OAICreate_auto_moderation_rule_200_response.h
  OAICreate_auto_moderation_rule_request.h
  OAICreate_channel_invite_request.h
  OAICreate_guild_emoji_request.h
  OAICreate_guild_from_template_request.h
  OAICreate_guild_role_request.h
  OAICreate_guild_scheduled_event_request.h
  OAICreate_guild_template_request.h
  OAICreate_interaction_response_request.h
  OAICreate_lobby_request.h
  OAICreate_or_join_lobby_request.h
  OAICreate_stage_instance_request.h
  OAICreate_thread_request.h
  OAICreate_webhook_request.h
  OAICreatedThreadResponse.h
  OAIDefaultKeywordListTriggerMetadata.h
  OAIDefaultKeywordListTriggerMetadataResponse.h
  OAIDefaultKeywordListUpsertRequest.h
  OAIDefaultKeywordListUpsertRequestPartial.h
  OAIDefaultKeywordListUpsertRequest_actions_inner.h
  OAIDefaultKeywordRuleResponse.h
  OAIDefaultKeywordRuleResponse_actions_inner.h
  OAIDefaultReactionEmojiResponse.h
  OAIDiscordIntegrationResponse.h
  OAIEdit_lobby_channel_link_request.h
  OAIEmbeddedActivityInstance.h
  OAIEmbeddedActivityInstance_location.h
  OAIEmojiResponse.h
  OAIEntitlementResponse.h
  OAIEntityMetadataExternal.h
  OAIEntityMetadataExternalResponse.h
  OAIError.h
  OAIErrorDetails.h
  OAIErrorResponse.h
  OAIExecute_webhook_request.h
  OAIExternalConnectionIntegrationResponse.h
  OAIExternalScheduledEventCreateRequest.h
  OAIExternalScheduledEventPatchRequestPartial.h
  OAIExternalScheduledEventResponse.h
  OAIFileComponentForMessageRequest.h
  OAIFileComponentResponse.h
  OAIFlagToChannelAction.h
  OAIFlagToChannelActionMetadata.h
  OAIFlagToChannelActionMetadataResponse.h
  OAIFlagToChannelActionResponse.h
  OAIFollow_channel_request.h
  OAIForumTagResponse.h
  OAIFriendInviteResponse.h
  OAIGatewayBotResponse.h
  OAIGatewayBotSessionStartLimitResponse.h
  OAIGatewayResponse.h
  OAIGet_channel_200_response.h
  OAIGet_entitlements_sku_ids_parameter.h
  OAIGet_sticker_200_response.h
  OAIGithubAuthor.h
  OAIGithubCheckApp.h
  OAIGithubCheckPullRequest.h
  OAIGithubCheckRun.h
  OAIGithubCheckRunOutput.h
  OAIGithubCheckSuite.h
  OAIGithubComment.h
  OAIGithubCommit.h
  OAIGithubDiscussion.h
  OAIGithubIssue.h
  OAIGithubRelease.h
  OAIGithubRepository.h
  OAIGithubReview.h
  OAIGithubUser.h
  OAIGithubWebhook.h
  OAIGroupDMInviteResponse.h
  OAIGuildAuditLogResponse.h
  OAIGuildAuditLogResponse_integrations_inner.h
  OAIGuildBanResponse.h
  OAIGuildChannelLocation.h
  OAIGuildChannelResponse.h
  OAIGuildCreateRequest.h
  OAIGuildHomeSettingsResponse.h
  OAIGuildIncomingWebhookResponse.h
  OAIGuildInviteResponse.h
  OAIGuildMFALevelResponse.h
  OAIGuildMemberResponse.h
  OAIGuildOnboardingResponse.h
  OAIGuildPatchRequestPartial.h
  OAIGuildPreviewResponse.h
  OAIGuildProductPurchaseResponse.h
  OAIGuildPruneResponse.h
  OAIGuildResponse.h
  OAIGuildRoleResponse.h
  OAIGuildRoleTagsResponse.h
  OAIGuildStickerResponse.h
  OAIGuildSubscriptionIntegrationResponse.h
  OAIGuildTemplateChannelResponse.h
  OAIGuildTemplateChannelTags.h
  OAIGuildTemplateResponse.h
  OAIGuildTemplateRoleResponse.h
  OAIGuildTemplateSnapshotResponse.h
  OAIGuildWelcomeChannel.h
  OAIGuildWelcomeScreenChannelResponse.h
  OAIGuildWelcomeScreenResponse.h
  OAIGuildWithCountsResponse.h
  OAIIncomingWebhookInteractionRequest.h
  OAIIncomingWebhookRequestPartial.h
  OAIIncomingWebhookUpdateForInteractionCallbackRequestPartial.h
  OAIIncomingWebhookUpdateRequestPartial.h
  OAIInnerErrors.h
  OAIIntegrationApplicationResponse.h
  OAIInteractionApplicationCommandAutocompleteCallbackIntegerData.h
  OAIInteractionApplicationCommandAutocompleteCallbackNumberData.h
  OAIInteractionApplicationCommandAutocompleteCallbackStringData.h
  OAIInteractionCallbackResponse.h
  OAIInteractionCallbackResponse_resource.h
  OAIInteractionResponse.h
  OAIInviteApplicationResponse.h
  OAIInviteChannelRecipientResponse.h
  OAIInviteChannelResponse.h
  OAIInviteGuildResponse.h
  OAIKeywordRuleResponse.h
  OAIKeywordTriggerMetadata.h
  OAIKeywordTriggerMetadataResponse.h
  OAIKeywordUpsertRequest.h
  OAIKeywordUpsertRequestPartial.h
  OAILaunchActivityInteractionCallbackRequest.h
  OAILaunchActivityInteractionCallbackResponse.h
  OAIListApplicationEmojisResponse.h
  OAIListGuildSoundboardSoundsResponse.h
  OAIList_auto_moderation_rules_200_response_inner.h
  OAIList_channel_invites_200_response_inner.h
  OAIList_channel_webhooks_200_response_inner.h
  OAIList_guild_integrations_200_response_inner.h
  OAIList_guild_scheduled_events_200_response_inner.h
  OAILobbyMemberRequest.h
  OAILobbyMemberResponse.h
  OAILobbyMessageResponse.h
  OAILobbyResponse.h
  OAIMLSpamRuleResponse.h
  OAIMLSpamUpsertRequest.h
  OAIMLSpamUpsertRequestPartial.h
  OAIMediaGalleryComponentForMessageRequest.h
  OAIMediaGalleryComponentResponse.h
  OAIMediaGalleryItemRequest.h
  OAIMediaGalleryItemResponse.h
  OAIMentionSpamRuleResponse.h
  OAIMentionSpamTriggerMetadata.h
  OAIMentionSpamTriggerMetadataResponse.h
  OAIMentionSpamUpsertRequest.h
  OAIMentionSpamUpsertRequestPartial.h
  OAIMentionableSelectComponentForMessageRequest.h
  OAIMentionableSelectComponentForMessageRequest_default_values_inner.h
  OAIMentionableSelectComponentResponse.h
  OAIMentionableSelectComponentResponse_default_values_inner.h
  OAIMessageAllowedMentionsRequest.h
  OAIMessageAttachmentRequest.h
  OAIMessageAttachmentResponse.h
  OAIMessageCallResponse.h
  OAIMessageComponentInteractionMetadataResponse.h
  OAIMessageCreateRequest.h
  OAIMessageEditRequestPartial.h
  OAIMessageEmbedAuthorResponse.h
  OAIMessageEmbedFieldResponse.h
  OAIMessageEmbedFooterResponse.h
  OAIMessageEmbedImageResponse.h
  OAIMessageEmbedProviderResponse.h
  OAIMessageEmbedResponse.h
  OAIMessageEmbedVideoResponse.h
  OAIMessageInteractionResponse.h
  OAIMessageMentionChannelResponse.h
  OAIMessageReactionCountDetailsResponse.h
  OAIMessageReactionEmojiResponse.h
  OAIMessageReactionResponse.h
  OAIMessageReferenceRequest.h
  OAIMessageReferenceResponse.h
  OAIMessageResponse.h
  OAIMessageRoleSubscriptionDataResponse.h
  OAIMessageSnapshotResponse.h
  OAIMessageStickerItemResponse.h
  OAIMinimalContentMessageResponse.h
  OAIModalInteractionCallbackRequest.h
  OAIModalInteractionCallbackRequestData.h
  OAIModalSubmitInteractionMetadataResponse.h
  OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata.h
  OAIMyGuildResponse.h
  OAINewMemberActionResponse.h
  OAIOAuth2GetAuthorizationResponse.h
  OAIOAuth2GetKeys.h
  OAIOAuth2GetOpenIDConnectUserInfoResponse.h
  OAIOAuth2Key.h
  OAIOnboardingPromptOptionRequest.h
  OAIOnboardingPromptOptionResponse.h
  OAIOnboardingPromptResponse.h
  OAIPartialDiscordIntegrationResponse.h
  OAIPartialExternalConnectionIntegrationResponse.h
  OAIPartialGuildSubscriptionIntegrationResponse.h
  OAIPartner_sdk_unmerge_provisional_account_request.h
  OAIPinnedMessageResponse.h
  OAIPinnedMessagesResponse.h
  OAIPollAnswerCreateRequest.h
  OAIPollAnswerDetailsResponse.h
  OAIPollAnswerResponse.h
  OAIPollCreateRequest.h
  OAIPollEmoji.h
  OAIPollEmojiCreateRequest.h
  OAIPollMedia.h
  OAIPollMediaCreateRequest.h
  OAIPollMediaResponse.h
  OAIPollResponse.h
  OAIPollResultsEntryResponse.h
  OAIPollResultsResponse.h
  OAIPongInteractionCallbackRequest.h
  OAIPrivateApplicationResponse.h
  OAIPrivateChannelLocation.h
  OAIPrivateChannelResponse.h
  OAIPrivateGroupChannelResponse.h
  OAIPrivateGuildMemberResponse.h
  OAIProvisionalTokenResponse.h
  OAIPrune_guild_request.h
  OAIPrune_guild_request_include_roles.h
  OAIPurchaseNotificationResponse.h
  OAIQuarantineUserAction.h
  OAIQuarantineUserActionResponse.h
  OAIResolvedObjectsResponse.h
  OAIResourceChannelResponse.h
  OAIRichEmbed.h
  OAIRichEmbedAuthor.h
  OAIRichEmbedField.h
  OAIRichEmbedFooter.h
  OAIRichEmbedImage.h
  OAIRichEmbedProvider.h
  OAIRichEmbedThumbnail.h
  OAIRichEmbedVideo.h
  OAIRoleSelectComponentForMessageRequest.h
  OAIRoleSelectComponentResponse.h
  OAIRoleSelectDefaultValue.h
  OAIRoleSelectDefaultValueResponse.h
  OAISDKMessageRequest.h
  OAIScheduledEventResponse.h
  OAIScheduledEventUserResponse.h
  OAISectionComponentForMessageRequest.h
  OAISectionComponentForMessageRequest_accessory.h
  OAISectionComponentResponse.h
  OAISectionComponentResponse_accessory.h
  OAISeparatorComponentForMessageRequest.h
  OAISeparatorComponentResponse.h
  OAISet_channel_permission_overwrite_request.h
  OAISet_guild_application_command_permissions_request.h
  OAISet_guild_mfa_level_request.h
  OAISettingsEmojiResponse.h
  OAISlackWebhook.h
  OAISoundboardCreateRequest.h
  OAISoundboardPatchRequestPartial.h
  OAISoundboardSoundResponse.h
  OAISoundboardSoundSendRequest.h
  OAISpamLinkRuleResponse.h
  OAIStageInstanceResponse.h
  OAIStageScheduledEventCreateRequest.h
  OAIStageScheduledEventPatchRequestPartial.h
  OAIStageScheduledEventResponse.h
  OAIStandardStickerResponse.h
  OAIStickerPackCollectionResponse.h
  OAIStickerPackResponse.h
  OAIStringSelectComponentForMessageRequest.h
  OAIStringSelectComponentResponse.h
  OAIStringSelectOptionForMessageRequest.h
  OAIStringSelectOptionResponse.h
  OAITeamMemberResponse.h
  OAITeamResponse.h
  OAITextDisplayComponentForMessageRequest.h
  OAITextDisplayComponentResponse.h
  OAITextInputComponentForModalRequest.h
  OAITextInputComponentResponse.h
  OAIThreadMemberResponse.h
  OAIThreadMetadataResponse.h
  OAIThreadResponse.h
  OAIThreadSearchResponse.h
  OAIThread_search_tag_parameter.h
  OAIThreadsResponse.h
  OAIThumbnailComponentForMessageRequest.h
  OAIThumbnailComponentResponse.h
  OAIUnfurledMediaRequest.h
  OAIUnfurledMediaRequestWithAttachmentReferenceRequired.h
  OAIUnfurledMediaResponse.h
  OAIUpdateApplicationUserRoleConnectionRequest.h
  OAIUpdateDMRequestPartial.h
  OAIUpdateDefaultReactionEmojiRequest.h
  OAIUpdateGroupDMRequestPartial.h
  OAIUpdateGuildChannelRequestPartial.h
  OAIUpdateGuildOnboardingRequest.h
  OAIUpdateMessageInteractionCallbackRequest.h
  OAIUpdateMessageInteractionCallbackResponse.h
  OAIUpdateOnboardingPromptRequest.h
  OAIUpdateThreadRequestPartial.h
  OAIUpdateThreadTagRequest.h
  OAIUpdate_application_emoji_request.h
  OAIUpdate_auto_moderation_rule_request.h
  OAIUpdate_channel_request.h
  OAIUpdate_guild_emoji_request.h
  OAIUpdate_guild_member_request.h
  OAIUpdate_guild_scheduled_event_request.h
  OAIUpdate_guild_sticker_request.h
  OAIUpdate_guild_template_request.h
  OAIUpdate_guild_widget_settings_request.h
  OAIUpdate_my_guild_member_request.h
  OAIUpdate_self_voice_state_request.h
  OAIUpdate_stage_instance_request.h
  OAIUpdate_voice_state_request.h
  OAIUpdate_webhook_by_token_request.h
  OAIUpdate_webhook_request.h
  OAIUserAvatarDecorationResponse.h
  OAIUserCollectiblesResponse.h
  OAIUserCommunicationDisabledAction.h
  OAIUserCommunicationDisabledActionMetadata.h
  OAIUserCommunicationDisabledActionMetadataResponse.h
  OAIUserCommunicationDisabledActionResponse.h
  OAIUserGuildOnboardingResponse.h
  OAIUserNameplateResponse.h
  OAIUserPIIResponse.h
  OAIUserPrimaryGuildResponse.h
  OAIUserResponse.h
  OAIUserSelectComponentForMessageRequest.h
  OAIUserSelectComponentResponse.h
  OAIUserSelectDefaultValue.h
  OAIUserSelectDefaultValueResponse.h
  OAIVanityURLErrorResponse.h
  OAIVanityURLResponse.h
  OAIVoiceRegionResponse.h
  OAIVoiceScheduledEventCreateRequest.h
  OAIVoiceScheduledEventPatchRequestPartial.h
  OAIVoiceScheduledEventResponse.h
  OAIVoiceStateResponse.h
  OAIWebhookSlackEmbed.h
  OAIWebhookSlackEmbedField.h
  OAIWebhookSourceChannelResponse.h
  OAIWebhookSourceGuildResponse.h
  OAIWelcomeMessageResponse.h
  OAIWelcomeScreenPatchRequestPartial.h
  OAIWidgetActivity.h
  OAIWidgetChannel.h
  OAIWidgetMember.h
  OAIWidgetResponse.h
  OAIWidgetSettingsResponse.h
  OAIDefaultApi.h
  OAIHelpers.h
  OAIHttpRequest.h
  OAIObject.h
  OAIEnum.h
  OAIHttpFileElement.h
  OAIServerConfiguration.h
  OAIServerVariable.h
  OAIOauth.h
  OAIAccountResponse.cpp
  OAIActionRowComponentForMessageRequest.cpp
  OAIActionRowComponentForMessageRequest_components_inner.cpp
  OAIActionRowComponentForModalRequest.cpp
  OAIActionRowComponentResponse.cpp
  OAIActionRowComponentResponse_components_inner.cpp
  OAIActivitiesAttachmentResponse.cpp
  OAIAdd_group_dm_user_201_response.cpp
  OAIAdd_group_dm_user_request.cpp
  OAIAdd_guild_member_request.cpp
  OAIAdd_lobby_member_request.cpp
  OAIApplicationCommandAttachmentOption.cpp
  OAIApplicationCommandAttachmentOptionResponse.cpp
  OAIApplicationCommandAutocompleteCallbackRequest.cpp
  OAIApplicationCommandAutocompleteCallbackRequest_data.cpp
  OAIApplicationCommandBooleanOption.cpp
  OAIApplicationCommandBooleanOptionResponse.cpp
  OAIApplicationCommandChannelOption.cpp
  OAIApplicationCommandChannelOptionResponse.cpp
  OAIApplicationCommandCreateRequest.cpp
  OAIApplicationCommandCreateRequest_options_inner.cpp
  OAIApplicationCommandIntegerOption.cpp
  OAIApplicationCommandIntegerOptionResponse.cpp
  OAIApplicationCommandInteractionMetadataResponse.cpp
  OAIApplicationCommandMentionableOption.cpp
  OAIApplicationCommandMentionableOptionResponse.cpp
  OAIApplicationCommandNumberOption.cpp
  OAIApplicationCommandNumberOptionResponse.cpp
  OAIApplicationCommandOptionIntegerChoice.cpp
  OAIApplicationCommandOptionIntegerChoiceResponse.cpp
  OAIApplicationCommandOptionNumberChoice.cpp
  OAIApplicationCommandOptionNumberChoiceResponse.cpp
  OAIApplicationCommandOptionStringChoice.cpp
  OAIApplicationCommandOptionStringChoiceResponse.cpp
  OAIApplicationCommandPatchRequestPartial.cpp
  OAIApplicationCommandPermission.cpp
  OAIApplicationCommandResponse.cpp
  OAIApplicationCommandResponse_options_inner.cpp
  OAIApplicationCommandRoleOption.cpp
  OAIApplicationCommandRoleOptionResponse.cpp
  OAIApplicationCommandStringOption.cpp
  OAIApplicationCommandStringOptionResponse.cpp
  OAIApplicationCommandSubcommandGroupOption.cpp
  OAIApplicationCommandSubcommandGroupOptionResponse.cpp
  OAIApplicationCommandSubcommandOption.cpp
  OAIApplicationCommandSubcommandOptionResponse.cpp
  OAIApplicationCommandSubcommandOptionResponse_options_inner.cpp
  OAIApplicationCommandSubcommandOption_options_inner.cpp
  OAIApplicationCommandUpdateRequest.cpp
  OAIApplicationCommandUserOption.cpp
  OAIApplicationCommandUserOptionResponse.cpp
  OAIApplicationFormPartial.cpp
  OAIApplicationFormPartial_description.cpp
  OAIApplicationFormPartial_integration_types_config_value.cpp
  OAIApplicationIncomingWebhookResponse.cpp
  OAIApplicationIntegrationTypeConfiguration.cpp
  OAIApplicationIntegrationTypeConfigurationResponse.cpp
  OAIApplicationOAuth2InstallParams.cpp
  OAIApplicationOAuth2InstallParamsResponse.cpp
  OAIApplicationResponse.cpp
  OAIApplicationRoleConnectionsMetadataItemRequest.cpp
  OAIApplicationRoleConnectionsMetadataItemResponse.cpp
  OAIApplicationUserRoleConnectionResponse.cpp
  OAIAttachmentResponse.cpp
  OAIAuditLogEntryResponse.cpp
  OAIAuditLogObjectChangeResponse.cpp
  OAIBan_user_from_guild_request.cpp
  OAIBaseCreateMessageCreateRequest.cpp
  OAIBaseCreateMessageCreateRequest_components_inner.cpp
  OAIBasicApplicationResponse.cpp
  OAIBasicMessageResponse.cpp
  OAIBasicMessageResponse_components_inner.cpp
  OAIBasicMessageResponse_interaction_metadata.cpp
  OAIBasicMessageResponse_nonce.cpp
  OAIBlockMessageAction.cpp
  OAIBlockMessageActionMetadata.cpp
  OAIBlockMessageActionMetadataResponse.cpp
  OAIBlockMessageActionResponse.cpp
  OAIBotAccountPatchRequest.cpp
  OAIBulkBanUsersResponse.cpp
  OAIBulkLobbyMemberRequest.cpp
  OAIBulk_ban_users_from_guild_request.cpp
  OAIBulk_delete_messages_request.cpp
  OAIBulk_update_guild_channels_request_inner.cpp
  OAIBulk_update_guild_roles_request_inner.cpp
  OAIButtonComponentForMessageRequest.cpp
  OAIButtonComponentResponse.cpp
  OAIChannelFollowerResponse.cpp
  OAIChannelFollowerWebhookResponse.cpp
  OAIChannelPermissionOverwriteRequest.cpp
  OAIChannelPermissionOverwriteResponse.cpp
  OAIChannelSelectComponentForMessageRequest.cpp
  OAIChannelSelectComponentResponse.cpp
  OAIChannelSelectDefaultValue.cpp
  OAIChannelSelectDefaultValueResponse.cpp
  OAICommandPermissionResponse.cpp
  OAICommandPermissionsResponse.cpp
  OAIComponentEmojiForMessageRequest.cpp
  OAIComponentEmojiResponse.cpp
  OAIConnectedAccountGuildResponse.cpp
  OAIConnectedAccountIntegrationResponse.cpp
  OAIConnectedAccountResponse.cpp
  OAIContainerComponentForMessageRequest.cpp
  OAIContainerComponentForMessageRequest_components_inner.cpp
  OAIContainerComponentResponse.cpp
  OAIContainerComponentResponse_components_inner.cpp
  OAICreateEntitlementRequestData.cpp
  OAICreateForumThreadRequest.cpp
  OAICreateGroupDMInviteRequest.cpp
  OAICreateGuildChannelRequest.cpp
  OAICreateGuildInviteRequest.cpp
  OAICreateGuildRequestChannelItem.cpp
  OAICreateGuildRequestRoleItem.cpp
  OAICreateMessageInteractionCallbackRequest.cpp
  OAICreateMessageInteractionCallbackResponse.cpp
  OAICreateOrUpdateThreadTagRequest.cpp
  OAICreatePrivateChannelRequest.cpp
  OAICreateTextThreadWithMessageRequest.cpp
  OAICreateTextThreadWithoutMessageRequest.cpp
  OAICreate_application_emoji_request.cpp
  OAICreate_auto_moderation_rule_200_response.cpp
  OAICreate_auto_moderation_rule_request.cpp
  OAICreate_channel_invite_request.cpp
  OAICreate_guild_emoji_request.cpp
  OAICreate_guild_from_template_request.cpp
  OAICreate_guild_role_request.cpp
  OAICreate_guild_scheduled_event_request.cpp
  OAICreate_guild_template_request.cpp
  OAICreate_interaction_response_request.cpp
  OAICreate_lobby_request.cpp
  OAICreate_or_join_lobby_request.cpp
  OAICreate_stage_instance_request.cpp
  OAICreate_thread_request.cpp
  OAICreate_webhook_request.cpp
  OAICreatedThreadResponse.cpp
  OAIDefaultKeywordListTriggerMetadata.cpp
  OAIDefaultKeywordListTriggerMetadataResponse.cpp
  OAIDefaultKeywordListUpsertRequest.cpp
  OAIDefaultKeywordListUpsertRequestPartial.cpp
  OAIDefaultKeywordListUpsertRequest_actions_inner.cpp
  OAIDefaultKeywordRuleResponse.cpp
  OAIDefaultKeywordRuleResponse_actions_inner.cpp
  OAIDefaultReactionEmojiResponse.cpp
  OAIDiscordIntegrationResponse.cpp
  OAIEdit_lobby_channel_link_request.cpp
  OAIEmbeddedActivityInstance.cpp
  OAIEmbeddedActivityInstance_location.cpp
  OAIEmojiResponse.cpp
  OAIEntitlementResponse.cpp
  OAIEntityMetadataExternal.cpp
  OAIEntityMetadataExternalResponse.cpp
  OAIError.cpp
  OAIErrorDetails.cpp
  OAIErrorResponse.cpp
  OAIExecute_webhook_request.cpp
  OAIExternalConnectionIntegrationResponse.cpp
  OAIExternalScheduledEventCreateRequest.cpp
  OAIExternalScheduledEventPatchRequestPartial.cpp
  OAIExternalScheduledEventResponse.cpp
  OAIFileComponentForMessageRequest.cpp
  OAIFileComponentResponse.cpp
  OAIFlagToChannelAction.cpp
  OAIFlagToChannelActionMetadata.cpp
  OAIFlagToChannelActionMetadataResponse.cpp
  OAIFlagToChannelActionResponse.cpp
  OAIFollow_channel_request.cpp
  OAIForumTagResponse.cpp
  OAIFriendInviteResponse.cpp
  OAIGatewayBotResponse.cpp
  OAIGatewayBotSessionStartLimitResponse.cpp
  OAIGatewayResponse.cpp
  OAIGet_channel_200_response.cpp
  OAIGet_entitlements_sku_ids_parameter.cpp
  OAIGet_sticker_200_response.cpp
  OAIGithubAuthor.cpp
  OAIGithubCheckApp.cpp
  OAIGithubCheckPullRequest.cpp
  OAIGithubCheckRun.cpp
  OAIGithubCheckRunOutput.cpp
  OAIGithubCheckSuite.cpp
  OAIGithubComment.cpp
  OAIGithubCommit.cpp
  OAIGithubDiscussion.cpp
  OAIGithubIssue.cpp
  OAIGithubRelease.cpp
  OAIGithubRepository.cpp
  OAIGithubReview.cpp
  OAIGithubUser.cpp
  OAIGithubWebhook.cpp
  OAIGroupDMInviteResponse.cpp
  OAIGuildAuditLogResponse.cpp
  OAIGuildAuditLogResponse_integrations_inner.cpp
  OAIGuildBanResponse.cpp
  OAIGuildChannelLocation.cpp
  OAIGuildChannelResponse.cpp
  OAIGuildCreateRequest.cpp
  OAIGuildHomeSettingsResponse.cpp
  OAIGuildIncomingWebhookResponse.cpp
  OAIGuildInviteResponse.cpp
  OAIGuildMFALevelResponse.cpp
  OAIGuildMemberResponse.cpp
  OAIGuildOnboardingResponse.cpp
  OAIGuildPatchRequestPartial.cpp
  OAIGuildPreviewResponse.cpp
  OAIGuildProductPurchaseResponse.cpp
  OAIGuildPruneResponse.cpp
  OAIGuildResponse.cpp
  OAIGuildRoleResponse.cpp
  OAIGuildRoleTagsResponse.cpp
  OAIGuildStickerResponse.cpp
  OAIGuildSubscriptionIntegrationResponse.cpp
  OAIGuildTemplateChannelResponse.cpp
  OAIGuildTemplateChannelTags.cpp
  OAIGuildTemplateResponse.cpp
  OAIGuildTemplateRoleResponse.cpp
  OAIGuildTemplateSnapshotResponse.cpp
  OAIGuildWelcomeChannel.cpp
  OAIGuildWelcomeScreenChannelResponse.cpp
  OAIGuildWelcomeScreenResponse.cpp
  OAIGuildWithCountsResponse.cpp
  OAIIncomingWebhookInteractionRequest.cpp
  OAIIncomingWebhookRequestPartial.cpp
  OAIIncomingWebhookUpdateForInteractionCallbackRequestPartial.cpp
  OAIIncomingWebhookUpdateRequestPartial.cpp
  OAIInnerErrors.cpp
  OAIIntegrationApplicationResponse.cpp
  OAIInteractionApplicationCommandAutocompleteCallbackIntegerData.cpp
  OAIInteractionApplicationCommandAutocompleteCallbackNumberData.cpp
  OAIInteractionApplicationCommandAutocompleteCallbackStringData.cpp
  OAIInteractionCallbackResponse.cpp
  OAIInteractionCallbackResponse_resource.cpp
  OAIInteractionResponse.cpp
  OAIInviteApplicationResponse.cpp
  OAIInviteChannelRecipientResponse.cpp
  OAIInviteChannelResponse.cpp
  OAIInviteGuildResponse.cpp
  OAIKeywordRuleResponse.cpp
  OAIKeywordTriggerMetadata.cpp
  OAIKeywordTriggerMetadataResponse.cpp
  OAIKeywordUpsertRequest.cpp
  OAIKeywordUpsertRequestPartial.cpp
  OAILaunchActivityInteractionCallbackRequest.cpp
  OAILaunchActivityInteractionCallbackResponse.cpp
  OAIListApplicationEmojisResponse.cpp
  OAIListGuildSoundboardSoundsResponse.cpp
  OAIList_auto_moderation_rules_200_response_inner.cpp
  OAIList_channel_invites_200_response_inner.cpp
  OAIList_channel_webhooks_200_response_inner.cpp
  OAIList_guild_integrations_200_response_inner.cpp
  OAIList_guild_scheduled_events_200_response_inner.cpp
  OAILobbyMemberRequest.cpp
  OAILobbyMemberResponse.cpp
  OAILobbyMessageResponse.cpp
  OAILobbyResponse.cpp
  OAIMLSpamRuleResponse.cpp
  OAIMLSpamUpsertRequest.cpp
  OAIMLSpamUpsertRequestPartial.cpp
  OAIMediaGalleryComponentForMessageRequest.cpp
  OAIMediaGalleryComponentResponse.cpp
  OAIMediaGalleryItemRequest.cpp
  OAIMediaGalleryItemResponse.cpp
  OAIMentionSpamRuleResponse.cpp
  OAIMentionSpamTriggerMetadata.cpp
  OAIMentionSpamTriggerMetadataResponse.cpp
  OAIMentionSpamUpsertRequest.cpp
  OAIMentionSpamUpsertRequestPartial.cpp
  OAIMentionableSelectComponentForMessageRequest.cpp
  OAIMentionableSelectComponentForMessageRequest_default_values_inner.cpp
  OAIMentionableSelectComponentResponse.cpp
  OAIMentionableSelectComponentResponse_default_values_inner.cpp
  OAIMessageAllowedMentionsRequest.cpp
  OAIMessageAttachmentRequest.cpp
  OAIMessageAttachmentResponse.cpp
  OAIMessageCallResponse.cpp
  OAIMessageComponentInteractionMetadataResponse.cpp
  OAIMessageCreateRequest.cpp
  OAIMessageEditRequestPartial.cpp
  OAIMessageEmbedAuthorResponse.cpp
  OAIMessageEmbedFieldResponse.cpp
  OAIMessageEmbedFooterResponse.cpp
  OAIMessageEmbedImageResponse.cpp
  OAIMessageEmbedProviderResponse.cpp
  OAIMessageEmbedResponse.cpp
  OAIMessageEmbedVideoResponse.cpp
  OAIMessageInteractionResponse.cpp
  OAIMessageMentionChannelResponse.cpp
  OAIMessageReactionCountDetailsResponse.cpp
  OAIMessageReactionEmojiResponse.cpp
  OAIMessageReactionResponse.cpp
  OAIMessageReferenceRequest.cpp
  OAIMessageReferenceResponse.cpp
  OAIMessageResponse.cpp
  OAIMessageRoleSubscriptionDataResponse.cpp
  OAIMessageSnapshotResponse.cpp
  OAIMessageStickerItemResponse.cpp
  OAIMinimalContentMessageResponse.cpp
  OAIModalInteractionCallbackRequest.cpp
  OAIModalInteractionCallbackRequestData.cpp
  OAIModalSubmitInteractionMetadataResponse.cpp
  OAIModalSubmitInteractionMetadataResponse_triggering_interaction_metadata.cpp
  OAIMyGuildResponse.cpp
  OAINewMemberActionResponse.cpp
  OAIOAuth2GetAuthorizationResponse.cpp
  OAIOAuth2GetKeys.cpp
  OAIOAuth2GetOpenIDConnectUserInfoResponse.cpp
  OAIOAuth2Key.cpp
  OAIOnboardingPromptOptionRequest.cpp
  OAIOnboardingPromptOptionResponse.cpp
  OAIOnboardingPromptResponse.cpp
  OAIPartialDiscordIntegrationResponse.cpp
  OAIPartialExternalConnectionIntegrationResponse.cpp
  OAIPartialGuildSubscriptionIntegrationResponse.cpp
  OAIPartner_sdk_unmerge_provisional_account_request.cpp
  OAIPinnedMessageResponse.cpp
  OAIPinnedMessagesResponse.cpp
  OAIPollAnswerCreateRequest.cpp
  OAIPollAnswerDetailsResponse.cpp
  OAIPollAnswerResponse.cpp
  OAIPollCreateRequest.cpp
  OAIPollEmoji.cpp
  OAIPollEmojiCreateRequest.cpp
  OAIPollMedia.cpp
  OAIPollMediaCreateRequest.cpp
  OAIPollMediaResponse.cpp
  OAIPollResponse.cpp
  OAIPollResultsEntryResponse.cpp
  OAIPollResultsResponse.cpp
  OAIPongInteractionCallbackRequest.cpp
  OAIPrivateApplicationResponse.cpp
  OAIPrivateChannelLocation.cpp
  OAIPrivateChannelResponse.cpp
  OAIPrivateGroupChannelResponse.cpp
  OAIPrivateGuildMemberResponse.cpp
  OAIProvisionalTokenResponse.cpp
  OAIPrune_guild_request.cpp
  OAIPrune_guild_request_include_roles.cpp
  OAIPurchaseNotificationResponse.cpp
  OAIQuarantineUserAction.cpp
  OAIQuarantineUserActionResponse.cpp
  OAIResolvedObjectsResponse.cpp
  OAIResourceChannelResponse.cpp
  OAIRichEmbed.cpp
  OAIRichEmbedAuthor.cpp
  OAIRichEmbedField.cpp
  OAIRichEmbedFooter.cpp
  OAIRichEmbedImage.cpp
  OAIRichEmbedProvider.cpp
  OAIRichEmbedThumbnail.cpp
  OAIRichEmbedVideo.cpp
  OAIRoleSelectComponentForMessageRequest.cpp
  OAIRoleSelectComponentResponse.cpp
  OAIRoleSelectDefaultValue.cpp
  OAIRoleSelectDefaultValueResponse.cpp
  OAISDKMessageRequest.cpp
  OAIScheduledEventResponse.cpp
  OAIScheduledEventUserResponse.cpp
  OAISectionComponentForMessageRequest.cpp
  OAISectionComponentForMessageRequest_accessory.cpp
  OAISectionComponentResponse.cpp
  OAISectionComponentResponse_accessory.cpp
  OAISeparatorComponentForMessageRequest.cpp
  OAISeparatorComponentResponse.cpp
  OAISet_channel_permission_overwrite_request.cpp
  OAISet_guild_application_command_permissions_request.cpp
  OAISet_guild_mfa_level_request.cpp
  OAISettingsEmojiResponse.cpp
  OAISlackWebhook.cpp
  OAISoundboardCreateRequest.cpp
  OAISoundboardPatchRequestPartial.cpp
  OAISoundboardSoundResponse.cpp
  OAISoundboardSoundSendRequest.cpp
  OAISpamLinkRuleResponse.cpp
  OAIStageInstanceResponse.cpp
  OAIStageScheduledEventCreateRequest.cpp
  OAIStageScheduledEventPatchRequestPartial.cpp
  OAIStageScheduledEventResponse.cpp
  OAIStandardStickerResponse.cpp
  OAIStickerPackCollectionResponse.cpp
  OAIStickerPackResponse.cpp
  OAIStringSelectComponentForMessageRequest.cpp
  OAIStringSelectComponentResponse.cpp
  OAIStringSelectOptionForMessageRequest.cpp
  OAIStringSelectOptionResponse.cpp
  OAITeamMemberResponse.cpp
  OAITeamResponse.cpp
  OAITextDisplayComponentForMessageRequest.cpp
  OAITextDisplayComponentResponse.cpp
  OAITextInputComponentForModalRequest.cpp
  OAITextInputComponentResponse.cpp
  OAIThreadMemberResponse.cpp
  OAIThreadMetadataResponse.cpp
  OAIThreadResponse.cpp
  OAIThreadSearchResponse.cpp
  OAIThread_search_tag_parameter.cpp
  OAIThreadsResponse.cpp
  OAIThumbnailComponentForMessageRequest.cpp
  OAIThumbnailComponentResponse.cpp
  OAIUnfurledMediaRequest.cpp
  OAIUnfurledMediaRequestWithAttachmentReferenceRequired.cpp
  OAIUnfurledMediaResponse.cpp
  OAIUpdateApplicationUserRoleConnectionRequest.cpp
  OAIUpdateDMRequestPartial.cpp
  OAIUpdateDefaultReactionEmojiRequest.cpp
  OAIUpdateGroupDMRequestPartial.cpp
  OAIUpdateGuildChannelRequestPartial.cpp
  OAIUpdateGuildOnboardingRequest.cpp
  OAIUpdateMessageInteractionCallbackRequest.cpp
  OAIUpdateMessageInteractionCallbackResponse.cpp
  OAIUpdateOnboardingPromptRequest.cpp
  OAIUpdateThreadRequestPartial.cpp
  OAIUpdateThreadTagRequest.cpp
  OAIUpdate_application_emoji_request.cpp
  OAIUpdate_auto_moderation_rule_request.cpp
  OAIUpdate_channel_request.cpp
  OAIUpdate_guild_emoji_request.cpp
  OAIUpdate_guild_member_request.cpp
  OAIUpdate_guild_scheduled_event_request.cpp
  OAIUpdate_guild_sticker_request.cpp
  OAIUpdate_guild_template_request.cpp
  OAIUpdate_guild_widget_settings_request.cpp
  OAIUpdate_my_guild_member_request.cpp
  OAIUpdate_self_voice_state_request.cpp
  OAIUpdate_stage_instance_request.cpp
  OAIUpdate_voice_state_request.cpp
  OAIUpdate_webhook_by_token_request.cpp
  OAIUpdate_webhook_request.cpp
  OAIUserAvatarDecorationResponse.cpp
  OAIUserCollectiblesResponse.cpp
  OAIUserCommunicationDisabledAction.cpp
  OAIUserCommunicationDisabledActionMetadata.cpp
  OAIUserCommunicationDisabledActionMetadataResponse.cpp
  OAIUserCommunicationDisabledActionResponse.cpp
  OAIUserGuildOnboardingResponse.cpp
  OAIUserNameplateResponse.cpp
  OAIUserPIIResponse.cpp
  OAIUserPrimaryGuildResponse.cpp
  OAIUserResponse.cpp
  OAIUserSelectComponentForMessageRequest.cpp
  OAIUserSelectComponentResponse.cpp
  OAIUserSelectDefaultValue.cpp
  OAIUserSelectDefaultValueResponse.cpp
  OAIVanityURLErrorResponse.cpp
  OAIVanityURLResponse.cpp
  OAIVoiceRegionResponse.cpp
  OAIVoiceScheduledEventCreateRequest.cpp
  OAIVoiceScheduledEventPatchRequestPartial.cpp
  OAIVoiceScheduledEventResponse.cpp
  OAIVoiceStateResponse.cpp
  OAIWebhookSlackEmbed.cpp
  OAIWebhookSlackEmbedField.cpp
  OAIWebhookSourceChannelResponse.cpp
  OAIWebhookSourceGuildResponse.cpp
  OAIWelcomeMessageResponse.cpp
  OAIWelcomeScreenPatchRequestPartial.cpp
  OAIWidgetActivity.cpp
  OAIWidgetChannel.cpp
  OAIWidgetMember.cpp
  OAIWidgetResponse.cpp
  OAIWidgetSettingsResponse.cpp
  OAIDefaultApi.cpp
  OAIHelpers.cpp
  OAIHttpRequest.cpp
  OAIHttpFileElement.cpp
  OAIOauth.cpp
  )

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        Qt${QT_VERSION_MAJOR}::Core
        Qt${QT_VERSION_MAJOR}::Network
        Qt${QT_VERSION_MAJOR}::Gui

)

configure_package_config_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
    INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}"
)

install(
    TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}Targets
    LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
    INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}"
)

install(
    FILES ${HEADER_FILES}
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}
)

install(
    FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

install(
    EXPORT ${PROJECT_NAME}Targets
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)
