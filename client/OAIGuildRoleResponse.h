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
 * OAIGuildRoleResponse.h
 *
 * 
 */

#ifndef OAIGuildRoleResponse_H
#define OAIGuildRoleResponse_H

#include <QJsonObject>

#include "OAIGuildRoleTagsResponse.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIGuildRoleTagsResponse;

class OAIGuildRoleResponse : public OAIObject {
public:
    OAIGuildRoleResponse();
    OAIGuildRoleResponse(QString json);
    ~OAIGuildRoleResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getPermissions() const;
    void setPermissions(const QString &permissions);
    bool is_permissions_Set() const;
    bool is_permissions_Valid() const;

    qint32 getPosition() const;
    void setPosition(const qint32 &position);
    bool is_position_Set() const;
    bool is_position_Valid() const;

    qint32 getColor() const;
    void setColor(const qint32 &color);
    bool is_color_Set() const;
    bool is_color_Valid() const;

    bool isHoist() const;
    void setHoist(const bool &hoist);
    bool is_hoist_Set() const;
    bool is_hoist_Valid() const;

    bool isManaged() const;
    void setManaged(const bool &managed);
    bool is_managed_Set() const;
    bool is_managed_Valid() const;

    bool isMentionable() const;
    void setMentionable(const bool &mentionable);
    bool is_mentionable_Set() const;
    bool is_mentionable_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getIcon() const;
    void setIcon(const QString &icon);
    bool is_icon_Set() const;
    bool is_icon_Valid() const;

    QString getUnicodeEmoji() const;
    void setUnicodeEmoji(const QString &unicode_emoji);
    bool is_unicode_emoji_Set() const;
    bool is_unicode_emoji_Valid() const;

    OAIGuildRoleTagsResponse getTags() const;
    void setTags(const OAIGuildRoleTagsResponse &tags);
    bool is_tags_Set() const;
    bool is_tags_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString m_permissions;
    bool m_permissions_isSet;
    bool m_permissions_isValid;

    qint32 m_position;
    bool m_position_isSet;
    bool m_position_isValid;

    qint32 m_color;
    bool m_color_isSet;
    bool m_color_isValid;

    bool m_hoist;
    bool m_hoist_isSet;
    bool m_hoist_isValid;

    bool m_managed;
    bool m_managed_isSet;
    bool m_managed_isValid;

    bool m_mentionable;
    bool m_mentionable_isSet;
    bool m_mentionable_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_icon;
    bool m_icon_isSet;
    bool m_icon_isValid;

    QString m_unicode_emoji;
    bool m_unicode_emoji_isSet;
    bool m_unicode_emoji_isValid;

    OAIGuildRoleTagsResponse m_tags;
    bool m_tags_isSet;
    bool m_tags_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGuildRoleResponse)

#endif // OAIGuildRoleResponse_H
