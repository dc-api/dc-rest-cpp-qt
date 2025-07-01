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
 * OAIUpdate_guild_member_request.h
 *
 * 
 */

#ifndef OAIUpdate_guild_member_request_H
#define OAIUpdate_guild_member_request_H

#include <QJsonObject>

#include <QDateTime>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {

class OAIUpdate_guild_member_request : public OAIObject {
public:
    OAIUpdate_guild_member_request();
    OAIUpdate_guild_member_request(QString json);
    ~OAIUpdate_guild_member_request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getNick() const;
    void setNick(const QString &nick);
    bool is_nick_Set() const;
    bool is_nick_Valid() const;

    QSet<QString> getRoles() const;
    void setRoles(const QSet<QString> &roles);
    bool is_roles_Set() const;
    bool is_roles_Valid() const;

    bool isMute() const;
    void setMute(const bool &mute);
    bool is_mute_Set() const;
    bool is_mute_Valid() const;

    bool isDeaf() const;
    void setDeaf(const bool &deaf);
    bool is_deaf_Set() const;
    bool is_deaf_Valid() const;

    QString getChannelId() const;
    void setChannelId(const QString &channel_id);
    bool is_channel_id_Set() const;
    bool is_channel_id_Valid() const;

    QDateTime getCommunicationDisabledUntil() const;
    void setCommunicationDisabledUntil(const QDateTime &communication_disabled_until);
    bool is_communication_disabled_until_Set() const;
    bool is_communication_disabled_until_Valid() const;

    qint32 getFlags() const;
    void setFlags(const qint32 &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_nick;
    bool m_nick_isSet;
    bool m_nick_isValid;

    QSet<QString> m_roles;
    bool m_roles_isSet;
    bool m_roles_isValid;

    bool m_mute;
    bool m_mute_isSet;
    bool m_mute_isValid;

    bool m_deaf;
    bool m_deaf_isSet;
    bool m_deaf_isValid;

    QString m_channel_id;
    bool m_channel_id_isSet;
    bool m_channel_id_isValid;

    QDateTime m_communication_disabled_until;
    bool m_communication_disabled_until_isSet;
    bool m_communication_disabled_until_isValid;

    qint32 m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIUpdate_guild_member_request)

#endif // OAIUpdate_guild_member_request_H
