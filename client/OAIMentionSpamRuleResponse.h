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
 * OAIMentionSpamRuleResponse.h
 *
 * 
 */

#ifndef OAIMentionSpamRuleResponse_H
#define OAIMentionSpamRuleResponse_H

#include <QJsonObject>

#include "OAIDefaultKeywordRuleResponse_actions_inner.h"
#include "OAIMentionSpamTriggerMetadataResponse.h"
#include <QList>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIDefaultKeywordRuleResponse_actions_inner;
class OAIMentionSpamTriggerMetadataResponse;

class OAIMentionSpamRuleResponse : public OAIObject {
public:
    OAIMentionSpamRuleResponse();
    OAIMentionSpamRuleResponse(QString json);
    ~OAIMentionSpamRuleResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getGuildId() const;
    void setGuildId(const QString &guild_id);
    bool is_guild_id_Set() const;
    bool is_guild_id_Valid() const;

    QString getCreatorId() const;
    void setCreatorId(const QString &creator_id);
    bool is_creator_id_Set() const;
    bool is_creator_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    qint32 getEventType() const;
    void setEventType(const qint32 &event_type);
    bool is_event_type_Set() const;
    bool is_event_type_Valid() const;

    QList<OAIDefaultKeywordRuleResponse_actions_inner> getActions() const;
    void setActions(const QList<OAIDefaultKeywordRuleResponse_actions_inner> &actions);
    bool is_actions_Set() const;
    bool is_actions_Valid() const;

    qint32 getTriggerType() const;
    void setTriggerType(const qint32 &trigger_type);
    bool is_trigger_type_Set() const;
    bool is_trigger_type_Valid() const;

    OAIMentionSpamTriggerMetadataResponse getTriggerMetadata() const;
    void setTriggerMetadata(const OAIMentionSpamTriggerMetadataResponse &trigger_metadata);
    bool is_trigger_metadata_Set() const;
    bool is_trigger_metadata_Valid() const;

    bool isEnabled() const;
    void setEnabled(const bool &enabled);
    bool is_enabled_Set() const;
    bool is_enabled_Valid() const;

    QSet<QString> getExemptRoles() const;
    void setExemptRoles(const QSet<QString> &exempt_roles);
    bool is_exempt_roles_Set() const;
    bool is_exempt_roles_Valid() const;

    QSet<QString> getExemptChannels() const;
    void setExemptChannels(const QSet<QString> &exempt_channels);
    bool is_exempt_channels_Set() const;
    bool is_exempt_channels_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_guild_id;
    bool m_guild_id_isSet;
    bool m_guild_id_isValid;

    QString m_creator_id;
    bool m_creator_id_isSet;
    bool m_creator_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    qint32 m_event_type;
    bool m_event_type_isSet;
    bool m_event_type_isValid;

    QList<OAIDefaultKeywordRuleResponse_actions_inner> m_actions;
    bool m_actions_isSet;
    bool m_actions_isValid;

    qint32 m_trigger_type;
    bool m_trigger_type_isSet;
    bool m_trigger_type_isValid;

    OAIMentionSpamTriggerMetadataResponse m_trigger_metadata;
    bool m_trigger_metadata_isSet;
    bool m_trigger_metadata_isValid;

    bool m_enabled;
    bool m_enabled_isSet;
    bool m_enabled_isValid;

    QSet<QString> m_exempt_roles;
    bool m_exempt_roles_isSet;
    bool m_exempt_roles_isValid;

    QSet<QString> m_exempt_channels;
    bool m_exempt_channels_isSet;
    bool m_exempt_channels_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIMentionSpamRuleResponse)

#endif // OAIMentionSpamRuleResponse_H
