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

/*
 * OAIGuildHomeSettingsResponse.h
 *
 * 
 */

#ifndef OAIGuildHomeSettingsResponse_H
#define OAIGuildHomeSettingsResponse_H

#include <QJsonObject>

#include "OAINewMemberActionResponse.h"
#include "OAIResourceChannelResponse.h"
#include "OAIWelcomeMessageResponse.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIWelcomeMessageResponse;
class OAINewMemberActionResponse;
class OAIResourceChannelResponse;

class OAIGuildHomeSettingsResponse : public OAIObject {
public:
    OAIGuildHomeSettingsResponse();
    OAIGuildHomeSettingsResponse(QString json);
    ~OAIGuildHomeSettingsResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getGuildId() const;
    void setGuildId(const QString &guild_id);
    bool is_guild_id_Set() const;
    bool is_guild_id_Valid() const;

    bool isEnabled() const;
    void setEnabled(const bool &enabled);
    bool is_enabled_Set() const;
    bool is_enabled_Valid() const;

    OAIWelcomeMessageResponse getWelcomeMessage() const;
    void setWelcomeMessage(const OAIWelcomeMessageResponse &welcome_message);
    bool is_welcome_message_Set() const;
    bool is_welcome_message_Valid() const;

    QList<OAINewMemberActionResponse> getNewMemberActions() const;
    void setNewMemberActions(const QList<OAINewMemberActionResponse> &new_member_actions);
    bool is_new_member_actions_Set() const;
    bool is_new_member_actions_Valid() const;

    QList<OAIResourceChannelResponse> getResourceChannels() const;
    void setResourceChannels(const QList<OAIResourceChannelResponse> &resource_channels);
    bool is_resource_channels_Set() const;
    bool is_resource_channels_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_guild_id;
    bool m_guild_id_isSet;
    bool m_guild_id_isValid;

    bool m_enabled;
    bool m_enabled_isSet;
    bool m_enabled_isValid;

    OAIWelcomeMessageResponse m_welcome_message;
    bool m_welcome_message_isSet;
    bool m_welcome_message_isValid;

    QList<OAINewMemberActionResponse> m_new_member_actions;
    bool m_new_member_actions_isSet;
    bool m_new_member_actions_isValid;

    QList<OAIResourceChannelResponse> m_resource_channels;
    bool m_resource_channels_isSet;
    bool m_resource_channels_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGuildHomeSettingsResponse)

#endif // OAIGuildHomeSettingsResponse_H
