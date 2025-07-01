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
 * OAIFriendInviteResponse.h
 *
 * 
 */

#ifndef OAIFriendInviteResponse_H
#define OAIFriendInviteResponse_H

#include <QJsonObject>

#include "OAIInviteChannelResponse.h"
#include "OAIUserResponse.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIUserResponse;
class OAIInviteChannelResponse;

class OAIFriendInviteResponse : public OAIObject {
public:
    OAIFriendInviteResponse();
    OAIFriendInviteResponse(QString json);
    ~OAIFriendInviteResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCode() const;
    void setCode(const QString &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    OAIUserResponse getInviter() const;
    void setInviter(const OAIUserResponse &inviter);
    bool is_inviter_Set() const;
    bool is_inviter_Valid() const;

    qint32 getMaxAge() const;
    void setMaxAge(const qint32 &max_age);
    bool is_max_age_Set() const;
    bool is_max_age_Valid() const;

    QDateTime getCreatedAt() const;
    void setCreatedAt(const QDateTime &created_at);
    bool is_created_at_Set() const;
    bool is_created_at_Valid() const;

    QDateTime getExpiresAt() const;
    void setExpiresAt(const QDateTime &expires_at);
    bool is_expires_at_Set() const;
    bool is_expires_at_Valid() const;

    qint32 getFriendsCount() const;
    void setFriendsCount(const qint32 &friends_count);
    bool is_friends_count_Set() const;
    bool is_friends_count_Valid() const;

    OAIInviteChannelResponse getChannel() const;
    void setChannel(const OAIInviteChannelResponse &channel);
    bool is_channel_Set() const;
    bool is_channel_Valid() const;

    bool isIsContact() const;
    void setIsContact(const bool &is_contact);
    bool is_is_contact_Set() const;
    bool is_is_contact_Valid() const;

    qint32 getUses() const;
    void setUses(const qint32 &uses);
    bool is_uses_Set() const;
    bool is_uses_Valid() const;

    qint32 getMaxUses() const;
    void setMaxUses(const qint32 &max_uses);
    bool is_max_uses_Set() const;
    bool is_max_uses_Valid() const;

    qint32 getFlags() const;
    void setFlags(const qint32 &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_code;
    bool m_code_isSet;
    bool m_code_isValid;

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    OAIUserResponse m_inviter;
    bool m_inviter_isSet;
    bool m_inviter_isValid;

    qint32 m_max_age;
    bool m_max_age_isSet;
    bool m_max_age_isValid;

    QDateTime m_created_at;
    bool m_created_at_isSet;
    bool m_created_at_isValid;

    QDateTime m_expires_at;
    bool m_expires_at_isSet;
    bool m_expires_at_isValid;

    qint32 m_friends_count;
    bool m_friends_count_isSet;
    bool m_friends_count_isValid;

    OAIInviteChannelResponse m_channel;
    bool m_channel_isSet;
    bool m_channel_isValid;

    bool m_is_contact;
    bool m_is_contact_isSet;
    bool m_is_contact_isValid;

    qint32 m_uses;
    bool m_uses_isSet;
    bool m_uses_isValid;

    qint32 m_max_uses;
    bool m_max_uses_isSet;
    bool m_max_uses_isValid;

    qint32 m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIFriendInviteResponse)

#endif // OAIFriendInviteResponse_H
