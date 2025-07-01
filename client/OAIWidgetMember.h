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
 * OAIWidgetMember.h
 *
 * 
 */

#ifndef OAIWidgetMember_H
#define OAIWidgetMember_H

#include <QJsonObject>

#include "OAIWidgetActivity.h"
#include <QJsonValue>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIWidgetActivity;

class OAIWidgetMember : public OAIObject {
public:
    OAIWidgetMember();
    OAIWidgetMember(QString json);
    ~OAIWidgetMember() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getUsername() const;
    void setUsername(const QString &username);
    bool is_username_Set() const;
    bool is_username_Valid() const;

    QString getDiscriminator() const;
    void setDiscriminator(const QString &discriminator);
    bool is_discriminator_Set() const;
    bool is_discriminator_Valid() const;

    QString getStatus() const;
    void setStatus(const QString &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    QString getAvatarUrl() const;
    void setAvatarUrl(const QString &avatar_url);
    bool is_avatar_url_Set() const;
    bool is_avatar_url_Valid() const;

    QJsonValue getAvatar() const;
    void setAvatar(const QJsonValue &avatar);
    bool is_avatar_Set() const;
    bool is_avatar_Valid() const;

    OAIWidgetActivity getActivity() const;
    void setActivity(const OAIWidgetActivity &activity);
    bool is_activity_Set() const;
    bool is_activity_Valid() const;

    bool isDeaf() const;
    void setDeaf(const bool &deaf);
    bool is_deaf_Set() const;
    bool is_deaf_Valid() const;

    bool isMute() const;
    void setMute(const bool &mute);
    bool is_mute_Set() const;
    bool is_mute_Valid() const;

    bool isSelfDeaf() const;
    void setSelfDeaf(const bool &self_deaf);
    bool is_self_deaf_Set() const;
    bool is_self_deaf_Valid() const;

    bool isSelfMute() const;
    void setSelfMute(const bool &self_mute);
    bool is_self_mute_Set() const;
    bool is_self_mute_Valid() const;

    bool isSuppress() const;
    void setSuppress(const bool &suppress);
    bool is_suppress_Set() const;
    bool is_suppress_Valid() const;

    QString getChannelId() const;
    void setChannelId(const QString &channel_id);
    bool is_channel_id_Set() const;
    bool is_channel_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_username;
    bool m_username_isSet;
    bool m_username_isValid;

    QString m_discriminator;
    bool m_discriminator_isSet;
    bool m_discriminator_isValid;

    QString m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    QString m_avatar_url;
    bool m_avatar_url_isSet;
    bool m_avatar_url_isValid;

    QJsonValue m_avatar;
    bool m_avatar_isSet;
    bool m_avatar_isValid;

    OAIWidgetActivity m_activity;
    bool m_activity_isSet;
    bool m_activity_isValid;

    bool m_deaf;
    bool m_deaf_isSet;
    bool m_deaf_isValid;

    bool m_mute;
    bool m_mute_isSet;
    bool m_mute_isValid;

    bool m_self_deaf;
    bool m_self_deaf_isSet;
    bool m_self_deaf_isValid;

    bool m_self_mute;
    bool m_self_mute_isSet;
    bool m_self_mute_isValid;

    bool m_suppress;
    bool m_suppress_isSet;
    bool m_suppress_isValid;

    QString m_channel_id;
    bool m_channel_id_isSet;
    bool m_channel_id_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIWidgetMember)

#endif // OAIWidgetMember_H
