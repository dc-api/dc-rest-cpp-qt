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
 * OAIPrivateGuildMemberResponse.h
 *
 * 
 */

#ifndef OAIPrivateGuildMemberResponse_H
#define OAIPrivateGuildMemberResponse_H

#include <QJsonObject>

#include "OAIUserAvatarDecorationResponse.h"
#include "OAIUserResponse.h"
#include <QDateTime>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIUserResponse;
class OAIUserAvatarDecorationResponse;

class OAIPrivateGuildMemberResponse : public OAIObject {
public:
    OAIPrivateGuildMemberResponse();
    OAIPrivateGuildMemberResponse(QString json);
    ~OAIPrivateGuildMemberResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFlags() const;
    void setFlags(const qint32 &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QDateTime getJoinedAt() const;
    void setJoinedAt(const QDateTime &joined_at);
    bool is_joined_at_Set() const;
    bool is_joined_at_Valid() const;

    bool isPending() const;
    void setPending(const bool &pending);
    bool is_pending_Set() const;
    bool is_pending_Valid() const;

    QSet<QString> getRoles() const;
    void setRoles(const QSet<QString> &roles);
    bool is_roles_Set() const;
    bool is_roles_Valid() const;

    OAIUserResponse getUser() const;
    void setUser(const OAIUserResponse &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    bool isMute() const;
    void setMute(const bool &mute);
    bool is_mute_Set() const;
    bool is_mute_Valid() const;

    bool isDeaf() const;
    void setDeaf(const bool &deaf);
    bool is_deaf_Set() const;
    bool is_deaf_Valid() const;

    QString getAvatar() const;
    void setAvatar(const QString &avatar);
    bool is_avatar_Set() const;
    bool is_avatar_Valid() const;

    OAIUserAvatarDecorationResponse getAvatarDecorationData() const;
    void setAvatarDecorationData(const OAIUserAvatarDecorationResponse &avatar_decoration_data);
    bool is_avatar_decoration_data_Set() const;
    bool is_avatar_decoration_data_Valid() const;

    QString getBanner() const;
    void setBanner(const QString &banner);
    bool is_banner_Set() const;
    bool is_banner_Valid() const;

    QDateTime getCommunicationDisabledUntil() const;
    void setCommunicationDisabledUntil(const QDateTime &communication_disabled_until);
    bool is_communication_disabled_until_Set() const;
    bool is_communication_disabled_until_Valid() const;

    QString getNick() const;
    void setNick(const QString &nick);
    bool is_nick_Set() const;
    bool is_nick_Valid() const;

    QDateTime getPremiumSince() const;
    void setPremiumSince(const QDateTime &premium_since);
    bool is_premium_since_Set() const;
    bool is_premium_since_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QDateTime m_joined_at;
    bool m_joined_at_isSet;
    bool m_joined_at_isValid;

    bool m_pending;
    bool m_pending_isSet;
    bool m_pending_isValid;

    QSet<QString> m_roles;
    bool m_roles_isSet;
    bool m_roles_isValid;

    OAIUserResponse m_user;
    bool m_user_isSet;
    bool m_user_isValid;

    bool m_mute;
    bool m_mute_isSet;
    bool m_mute_isValid;

    bool m_deaf;
    bool m_deaf_isSet;
    bool m_deaf_isValid;

    QString m_avatar;
    bool m_avatar_isSet;
    bool m_avatar_isValid;

    OAIUserAvatarDecorationResponse m_avatar_decoration_data;
    bool m_avatar_decoration_data_isSet;
    bool m_avatar_decoration_data_isValid;

    QString m_banner;
    bool m_banner_isSet;
    bool m_banner_isValid;

    QDateTime m_communication_disabled_until;
    bool m_communication_disabled_until_isSet;
    bool m_communication_disabled_until_isValid;

    QString m_nick;
    bool m_nick_isSet;
    bool m_nick_isValid;

    QDateTime m_premium_since;
    bool m_premium_since_isSet;
    bool m_premium_since_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIPrivateGuildMemberResponse)

#endif // OAIPrivateGuildMemberResponse_H
