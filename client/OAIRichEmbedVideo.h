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
 * OAIRichEmbedVideo.h
 *
 * 
 */

#ifndef OAIRichEmbedVideo_H
#define OAIRichEmbedVideo_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {

class OAIRichEmbedVideo : public OAIObject {
public:
    OAIRichEmbedVideo();
    OAIRichEmbedVideo(QString json);
    ~OAIRichEmbedVideo() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    qint32 getWidth() const;
    void setWidth(const qint32 &width);
    bool is_width_Set() const;
    bool is_width_Valid() const;

    qint32 getHeight() const;
    void setHeight(const qint32 &height);
    bool is_height_Set() const;
    bool is_height_Valid() const;

    QString getPlaceholder() const;
    void setPlaceholder(const QString &placeholder);
    bool is_placeholder_Set() const;
    bool is_placeholder_Valid() const;

    qint32 getPlaceholderVersion() const;
    void setPlaceholderVersion(const qint32 &placeholder_version);
    bool is_placeholder_version_Set() const;
    bool is_placeholder_version_Valid() const;

    bool isIsAnimated() const;
    void setIsAnimated(const bool &is_animated);
    bool is_is_animated_Set() const;
    bool is_is_animated_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_url;
    bool m_url_isSet;
    bool m_url_isValid;

    qint32 m_width;
    bool m_width_isSet;
    bool m_width_isValid;

    qint32 m_height;
    bool m_height_isSet;
    bool m_height_isValid;

    QString m_placeholder;
    bool m_placeholder_isSet;
    bool m_placeholder_isValid;

    qint32 m_placeholder_version;
    bool m_placeholder_version_isSet;
    bool m_placeholder_version_isValid;

    bool m_is_animated;
    bool m_is_animated_isSet;
    bool m_is_animated_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIRichEmbedVideo)

#endif // OAIRichEmbedVideo_H
