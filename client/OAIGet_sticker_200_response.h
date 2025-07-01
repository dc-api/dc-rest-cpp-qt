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
 * OAIGet_sticker_200_response.h
 *
 * 
 */

#ifndef OAIGet_sticker_200_response_H
#define OAIGet_sticker_200_response_H

#include <QJsonObject>

#include "OAIGuildStickerResponse.h"
#include "OAIStandardStickerResponse.h"
#include "OAIUserResponse.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIUserResponse;

class OAIGet_sticker_200_response : public OAIObject {
public:
    OAIGet_sticker_200_response();
    OAIGet_sticker_200_response(QString json);
    ~OAIGet_sticker_200_response() override;

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

    QString getTags() const;
    void setTags(const QString &tags);
    bool is_tags_Set() const;
    bool is_tags_Valid() const;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    bool isAvailable() const;
    void setAvailable(const bool &available);
    bool is_available_Set() const;
    bool is_available_Valid() const;

    QString getGuildId() const;
    void setGuildId(const QString &guild_id);
    bool is_guild_id_Set() const;
    bool is_guild_id_Valid() const;

    QString getPackId() const;
    void setPackId(const QString &pack_id);
    bool is_pack_id_Set() const;
    bool is_pack_id_Valid() const;

    qint32 getSortValue() const;
    void setSortValue(const qint32 &sort_value);
    bool is_sort_value_Set() const;
    bool is_sort_value_Valid() const;

    qint32 getFormatType() const;
    void setFormatType(const qint32 &format_type);
    bool is_format_type_Set() const;
    bool is_format_type_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    OAIUserResponse getUser() const;
    void setUser(const OAIUserResponse &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

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

    QString m_tags;
    bool m_tags_isSet;
    bool m_tags_isValid;

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    bool m_available;
    bool m_available_isSet;
    bool m_available_isValid;

    QString m_guild_id;
    bool m_guild_id_isSet;
    bool m_guild_id_isValid;

    QString m_pack_id;
    bool m_pack_id_isSet;
    bool m_pack_id_isValid;

    qint32 m_sort_value;
    bool m_sort_value_isSet;
    bool m_sort_value_isValid;

    qint32 m_format_type;
    bool m_format_type_isSet;
    bool m_format_type_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    OAIUserResponse m_user;
    bool m_user_isSet;
    bool m_user_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGet_sticker_200_response)

#endif // OAIGet_sticker_200_response_H
