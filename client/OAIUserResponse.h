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
 * OAIUserResponse.h
 *
 * 
 */

#ifndef OAIUserResponse_H
#define OAIUserResponse_H

#include <QJsonObject>

#include "OAIUserAvatarDecorationResponse.h"
#include "OAIUserCollectiblesResponse.h"
#include "OAIUserPrimaryGuildResponse.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIUserAvatarDecorationResponse;
class OAIUserCollectiblesResponse;
class OAIUserPrimaryGuildResponse;

class OAIUserResponse : public OAIObject {
public:
    OAIUserResponse();
    OAIUserResponse(QString json);
    ~OAIUserResponse() override;

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

    qint32 getPublicFlags() const;
    void setPublicFlags(const qint32 &public_flags);
    bool is_public_flags_Set() const;
    bool is_public_flags_Valid() const;

    qint64 getFlags() const;
    void setFlags(const qint64 &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QString getAvatar() const;
    void setAvatar(const QString &avatar);
    bool is_avatar_Set() const;
    bool is_avatar_Valid() const;

    bool isBot() const;
    void setBot(const bool &bot);
    bool is_bot_Set() const;
    bool is_bot_Valid() const;

    bool isSystem() const;
    void setSystem(const bool &system);
    bool is_system_Set() const;
    bool is_system_Valid() const;

    QString getBanner() const;
    void setBanner(const QString &banner);
    bool is_banner_Set() const;
    bool is_banner_Valid() const;

    qint32 getAccentColor() const;
    void setAccentColor(const qint32 &accent_color);
    bool is_accent_color_Set() const;
    bool is_accent_color_Valid() const;

    QString getGlobalName() const;
    void setGlobalName(const QString &global_name);
    bool is_global_name_Set() const;
    bool is_global_name_Valid() const;

    OAIUserAvatarDecorationResponse getAvatarDecorationData() const;
    void setAvatarDecorationData(const OAIUserAvatarDecorationResponse &avatar_decoration_data);
    bool is_avatar_decoration_data_Set() const;
    bool is_avatar_decoration_data_Valid() const;

    OAIUserCollectiblesResponse getCollectibles() const;
    void setCollectibles(const OAIUserCollectiblesResponse &collectibles);
    bool is_collectibles_Set() const;
    bool is_collectibles_Valid() const;

    OAIUserPrimaryGuildResponse getPrimaryGuild() const;
    void setPrimaryGuild(const OAIUserPrimaryGuildResponse &primary_guild);
    bool is_primary_guild_Set() const;
    bool is_primary_guild_Valid() const;

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

    qint32 m_public_flags;
    bool m_public_flags_isSet;
    bool m_public_flags_isValid;

    qint64 m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QString m_avatar;
    bool m_avatar_isSet;
    bool m_avatar_isValid;

    bool m_bot;
    bool m_bot_isSet;
    bool m_bot_isValid;

    bool m_system;
    bool m_system_isSet;
    bool m_system_isValid;

    QString m_banner;
    bool m_banner_isSet;
    bool m_banner_isValid;

    qint32 m_accent_color;
    bool m_accent_color_isSet;
    bool m_accent_color_isValid;

    QString m_global_name;
    bool m_global_name_isSet;
    bool m_global_name_isValid;

    OAIUserAvatarDecorationResponse m_avatar_decoration_data;
    bool m_avatar_decoration_data_isSet;
    bool m_avatar_decoration_data_isValid;

    OAIUserCollectiblesResponse m_collectibles;
    bool m_collectibles_isSet;
    bool m_collectibles_isValid;

    OAIUserPrimaryGuildResponse m_primary_guild;
    bool m_primary_guild_isSet;
    bool m_primary_guild_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIUserResponse)

#endif // OAIUserResponse_H
