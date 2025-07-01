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
 * OAIGuildPreviewResponse.h
 *
 * 
 */

#ifndef OAIGuildPreviewResponse_H
#define OAIGuildPreviewResponse_H

#include <QJsonObject>

#include "OAIEmojiResponse.h"
#include "OAIGuildStickerResponse.h"
#include <QList>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIEmojiResponse;
class OAIGuildStickerResponse;

class OAIGuildPreviewResponse : public OAIObject {
public:
    OAIGuildPreviewResponse();
    OAIGuildPreviewResponse(QString json);
    ~OAIGuildPreviewResponse() override;

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

    QSet<QString> getFeatures() const;
    void setFeatures(const QSet<QString> &features);
    bool is_features_Set() const;
    bool is_features_Valid() const;

    qint32 getApproximateMemberCount() const;
    void setApproximateMemberCount(const qint32 &approximate_member_count);
    bool is_approximate_member_count_Set() const;
    bool is_approximate_member_count_Valid() const;

    qint32 getApproximatePresenceCount() const;
    void setApproximatePresenceCount(const qint32 &approximate_presence_count);
    bool is_approximate_presence_count_Set() const;
    bool is_approximate_presence_count_Valid() const;

    QList<OAIEmojiResponse> getEmojis() const;
    void setEmojis(const QList<OAIEmojiResponse> &emojis);
    bool is_emojis_Set() const;
    bool is_emojis_Valid() const;

    QList<OAIGuildStickerResponse> getStickers() const;
    void setStickers(const QList<OAIGuildStickerResponse> &stickers);
    bool is_stickers_Set() const;
    bool is_stickers_Valid() const;

    QString getIcon() const;
    void setIcon(const QString &icon);
    bool is_icon_Set() const;
    bool is_icon_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getHomeHeader() const;
    void setHomeHeader(const QString &home_header);
    bool is_home_header_Set() const;
    bool is_home_header_Valid() const;

    QString getSplash() const;
    void setSplash(const QString &splash);
    bool is_splash_Set() const;
    bool is_splash_Valid() const;

    QString getDiscoverySplash() const;
    void setDiscoverySplash(const QString &discovery_splash);
    bool is_discovery_splash_Set() const;
    bool is_discovery_splash_Valid() const;

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

    QSet<QString> m_features;
    bool m_features_isSet;
    bool m_features_isValid;

    qint32 m_approximate_member_count;
    bool m_approximate_member_count_isSet;
    bool m_approximate_member_count_isValid;

    qint32 m_approximate_presence_count;
    bool m_approximate_presence_count_isSet;
    bool m_approximate_presence_count_isValid;

    QList<OAIEmojiResponse> m_emojis;
    bool m_emojis_isSet;
    bool m_emojis_isValid;

    QList<OAIGuildStickerResponse> m_stickers;
    bool m_stickers_isSet;
    bool m_stickers_isValid;

    QString m_icon;
    bool m_icon_isSet;
    bool m_icon_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_home_header;
    bool m_home_header_isSet;
    bool m_home_header_isValid;

    QString m_splash;
    bool m_splash_isSet;
    bool m_splash_isValid;

    QString m_discovery_splash;
    bool m_discovery_splash_isSet;
    bool m_discovery_splash_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIGuildPreviewResponse)

#endif // OAIGuildPreviewResponse_H
